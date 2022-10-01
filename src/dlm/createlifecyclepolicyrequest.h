// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELIFECYCLEPOLICYREQUEST_H
#define QTAWS_CREATELIFECYCLEPOLICYREQUEST_H

#include "dlmrequest.h"

namespace QtAws {
namespace Dlm {

class CreateLifecyclePolicyRequestPrivate;

class QTAWSDLM_EXPORT CreateLifecyclePolicyRequest : public DlmRequest {

public:
    CreateLifecyclePolicyRequest(const CreateLifecyclePolicyRequest &other);
    CreateLifecyclePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLifecyclePolicyRequest)

};

} // namespace Dlm
} // namespace QtAws

#endif
