// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELIFECYCLEPOLICYREQUEST_H
#define QTAWS_DELETELIFECYCLEPOLICYREQUEST_H

#include "dlmrequest.h"

namespace QtAws {
namespace Dlm {

class DeleteLifecyclePolicyRequestPrivate;

class QTAWSDLM_EXPORT DeleteLifecyclePolicyRequest : public DlmRequest {

public:
    DeleteLifecyclePolicyRequest(const DeleteLifecyclePolicyRequest &other);
    DeleteLifecyclePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLifecyclePolicyRequest)

};

} // namespace Dlm
} // namespace QtAws

#endif
