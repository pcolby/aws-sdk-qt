// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROMPTSRESPONSE_H
#define QTAWS_LISTPROMPTSRESPONSE_H

#include "connectresponse.h"
#include "listpromptsrequest.h"

namespace QtAws {
namespace Connect {

class ListPromptsResponsePrivate;

class QTAWSCONNECT_EXPORT ListPromptsResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListPromptsResponse(const ListPromptsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPromptsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPromptsResponse)
    Q_DISABLE_COPY(ListPromptsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
