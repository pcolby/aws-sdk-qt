// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENEWOFFERINGREQUEST_H
#define QTAWS_RENEWOFFERINGREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class RenewOfferingRequestPrivate;

class QTAWSDEVICEFARM_EXPORT RenewOfferingRequest : public DeviceFarmRequest {

public:
    RenewOfferingRequest(const RenewOfferingRequest &other);
    RenewOfferingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RenewOfferingRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
