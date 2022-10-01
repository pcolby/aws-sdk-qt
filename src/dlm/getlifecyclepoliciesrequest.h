// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLIFECYCLEPOLICIESREQUEST_H
#define QTAWS_GETLIFECYCLEPOLICIESREQUEST_H

#include "dlmrequest.h"

namespace QtAws {
namespace Dlm {

class GetLifecyclePoliciesRequestPrivate;

class QTAWSDLM_EXPORT GetLifecyclePoliciesRequest : public DlmRequest {

public:
    GetLifecyclePoliciesRequest(const GetLifecyclePoliciesRequest &other);
    GetLifecyclePoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLifecyclePoliciesRequest)

};

} // namespace Dlm
} // namespace QtAws

#endif
