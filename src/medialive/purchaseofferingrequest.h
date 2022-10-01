// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASEOFFERINGREQUEST_H
#define QTAWS_PURCHASEOFFERINGREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class PurchaseOfferingRequestPrivate;

class QTAWSMEDIALIVE_EXPORT PurchaseOfferingRequest : public MediaLiveRequest {

public:
    PurchaseOfferingRequest(const PurchaseOfferingRequest &other);
    PurchaseOfferingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurchaseOfferingRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
