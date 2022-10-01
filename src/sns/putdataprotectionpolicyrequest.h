// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDATAPROTECTIONPOLICYREQUEST_H
#define QTAWS_PUTDATAPROTECTIONPOLICYREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class PutDataProtectionPolicyRequestPrivate;

class QTAWSSNS_EXPORT PutDataProtectionPolicyRequest : public SnsRequest {

public:
    PutDataProtectionPolicyRequest(const PutDataProtectionPolicyRequest &other);
    PutDataProtectionPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDataProtectionPolicyRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
