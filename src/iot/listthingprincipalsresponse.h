// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGPRINCIPALSRESPONSE_H
#define QTAWS_LISTTHINGPRINCIPALSRESPONSE_H

#include "iotresponse.h"
#include "listthingprincipalsrequest.h"

namespace QtAws {
namespace IoT {

class ListThingPrincipalsResponsePrivate;

class QTAWSIOT_EXPORT ListThingPrincipalsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListThingPrincipalsResponse(const ListThingPrincipalsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListThingPrincipalsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingPrincipalsResponse)
    Q_DISABLE_COPY(ListThingPrincipalsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
