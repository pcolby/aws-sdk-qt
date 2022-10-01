// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOLICYREQUEST_H
#define QTAWS_DELETEPOLICYREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DeletePolicyRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DeletePolicyRequest : public AutoScalingRequest {

public:
    DeletePolicyRequest(const DeletePolicyRequest &other);
    DeletePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePolicyRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
