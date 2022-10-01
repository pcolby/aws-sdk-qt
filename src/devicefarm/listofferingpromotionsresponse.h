// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOFFERINGPROMOTIONSRESPONSE_H
#define QTAWS_LISTOFFERINGPROMOTIONSRESPONSE_H

#include "devicefarmresponse.h"
#include "listofferingpromotionsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListOfferingPromotionsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListOfferingPromotionsResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListOfferingPromotionsResponse(const ListOfferingPromotionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOfferingPromotionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOfferingPromotionsResponse)
    Q_DISABLE_COPY(ListOfferingPromotionsResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
