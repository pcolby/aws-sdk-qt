// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKTEMPLATESRESPONSE_H
#define QTAWS_LISTTASKTEMPLATESRESPONSE_H

#include "connectresponse.h"
#include "listtasktemplatesrequest.h"

namespace QtAws {
namespace Connect {

class ListTaskTemplatesResponsePrivate;

class QTAWSCONNECT_EXPORT ListTaskTemplatesResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListTaskTemplatesResponse(const ListTaskTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTaskTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTaskTemplatesResponse)
    Q_DISABLE_COPY(ListTaskTemplatesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
