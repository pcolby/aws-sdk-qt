// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERUSAGEREQUEST_H
#define QTAWS_REGISTERUSAGEREQUEST_H

#include "marketplacemeteringrequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class RegisterUsageRequestPrivate;

class QTAWSMARKETPLACEMETERING_EXPORT RegisterUsageRequest : public MarketplaceMeteringRequest {

public:
    RegisterUsageRequest(const RegisterUsageRequest &other);
    RegisterUsageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterUsageRequest)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
