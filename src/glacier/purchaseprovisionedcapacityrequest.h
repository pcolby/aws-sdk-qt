// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASEPROVISIONEDCAPACITYREQUEST_H
#define QTAWS_PURCHASEPROVISIONEDCAPACITYREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class PurchaseProvisionedCapacityRequestPrivate;

class QTAWSGLACIER_EXPORT PurchaseProvisionedCapacityRequest : public GlacierRequest {

public:
    PurchaseProvisionedCapacityRequest(const PurchaseProvisionedCapacityRequest &other);
    PurchaseProvisionedCapacityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseProvisionedCapacityRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
