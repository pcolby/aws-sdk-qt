// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUTHORIZERSRESPONSE_H
#define QTAWS_LISTAUTHORIZERSRESPONSE_H

#include "iotresponse.h"
#include "listauthorizersrequest.h"

namespace QtAws {
namespace IoT {

class ListAuthorizersResponsePrivate;

class QTAWSIOT_EXPORT ListAuthorizersResponse : public IoTResponse {
    Q_OBJECT

public:
    ListAuthorizersResponse(const ListAuthorizersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAuthorizersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAuthorizersResponse)
    Q_DISABLE_COPY(ListAuthorizersResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
