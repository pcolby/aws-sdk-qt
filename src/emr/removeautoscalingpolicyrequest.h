// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEAUTOSCALINGPOLICYREQUEST_H
#define QTAWS_REMOVEAUTOSCALINGPOLICYREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class RemoveAutoScalingPolicyRequestPrivate;

class QTAWSEMR_EXPORT RemoveAutoScalingPolicyRequest : public EmrRequest {

public:
    RemoveAutoScalingPolicyRequest(const RemoveAutoScalingPolicyRequest &other);
    RemoveAutoScalingPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveAutoScalingPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
