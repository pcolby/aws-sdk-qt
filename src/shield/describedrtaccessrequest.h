// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDRTACCESSREQUEST_H
#define QTAWS_DESCRIBEDRTACCESSREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class DescribeDRTAccessRequestPrivate;

class QTAWSSHIELD_EXPORT DescribeDRTAccessRequest : public ShieldRequest {

public:
    DescribeDRTAccessRequest(const DescribeDRTAccessRequest &other);
    DescribeDRTAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDRTAccessRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
