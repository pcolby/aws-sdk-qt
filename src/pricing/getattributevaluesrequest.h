// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTRIBUTEVALUESREQUEST_H
#define QTAWS_GETATTRIBUTEVALUESREQUEST_H

#include "pricingrequest.h"

namespace QtAws {
namespace Pricing {

class GetAttributeValuesRequestPrivate;

class QTAWSPRICING_EXPORT GetAttributeValuesRequest : public PricingRequest {

public:
    GetAttributeValuesRequest(const GetAttributeValuesRequest &other);
    GetAttributeValuesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAttributeValuesRequest)

};

} // namespace Pricing
} // namespace QtAws

#endif
