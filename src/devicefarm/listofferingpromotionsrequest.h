// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOFFERINGPROMOTIONSREQUEST_H
#define QTAWS_LISTOFFERINGPROMOTIONSREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListOfferingPromotionsRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListOfferingPromotionsRequest : public DeviceFarmRequest {

public:
    ListOfferingPromotionsRequest(const ListOfferingPromotionsRequest &other);
    ListOfferingPromotionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOfferingPromotionsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
