// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRINCIPALTHINGSRESPONSE_H
#define QTAWS_LISTPRINCIPALTHINGSRESPONSE_H

#include "iotresponse.h"
#include "listprincipalthingsrequest.h"

namespace QtAws {
namespace IoT {

class ListPrincipalThingsResponsePrivate;

class QTAWSIOT_EXPORT ListPrincipalThingsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListPrincipalThingsResponse(const ListPrincipalThingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPrincipalThingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPrincipalThingsResponse)
    Q_DISABLE_COPY(ListPrincipalThingsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
