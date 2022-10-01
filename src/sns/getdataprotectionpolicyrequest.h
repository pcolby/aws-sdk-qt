// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAPROTECTIONPOLICYREQUEST_H
#define QTAWS_GETDATAPROTECTIONPOLICYREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class GetDataProtectionPolicyRequestPrivate;

class QTAWSSNS_EXPORT GetDataProtectionPolicyRequest : public SnsRequest {

public:
    GetDataProtectionPolicyRequest(const GetDataProtectionPolicyRequest &other);
    GetDataProtectionPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataProtectionPolicyRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
