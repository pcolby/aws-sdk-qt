// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELONGTERMPRICINGREQUEST_H
#define QTAWS_UPDATELONGTERMPRICINGREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class UpdateLongTermPricingRequestPrivate;

class QTAWSSNOWBALL_EXPORT UpdateLongTermPricingRequest : public SnowballRequest {

public:
    UpdateLongTermPricingRequest(const UpdateLongTermPricingRequest &other);
    UpdateLongTermPricingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLongTermPricingRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
