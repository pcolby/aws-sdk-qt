// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELIFECYCLEPOLICYREQUEST_H
#define QTAWS_UPDATELIFECYCLEPOLICYREQUEST_H

#include "dlmrequest.h"

namespace QtAws {
namespace Dlm {

class UpdateLifecyclePolicyRequestPrivate;

class QTAWSDLM_EXPORT UpdateLifecyclePolicyRequest : public DlmRequest {

public:
    UpdateLifecyclePolicyRequest(const UpdateLifecyclePolicyRequest &other);
    UpdateLifecyclePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLifecyclePolicyRequest)

};

} // namespace Dlm
} // namespace QtAws

#endif
