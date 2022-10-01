// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELONGTERMPRICINGREQUEST_H
#define QTAWS_CREATELONGTERMPRICINGREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class CreateLongTermPricingRequestPrivate;

class QTAWSSNOWBALL_EXPORT CreateLongTermPricingRequest : public SnowballRequest {

public:
    CreateLongTermPricingRequest(const CreateLongTermPricingRequest &other);
    CreateLongTermPricingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLongTermPricingRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
