// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTSRESPONSE_H
#define QTAWS_LISTBOTSRESPONSE_H

#include "connectresponse.h"
#include "listbotsrequest.h"

namespace QtAws {
namespace Connect {

class ListBotsResponsePrivate;

class QTAWSCONNECT_EXPORT ListBotsResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListBotsResponse(const ListBotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBotsResponse)
    Q_DISABLE_COPY(ListBotsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
