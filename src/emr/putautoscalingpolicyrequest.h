// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAUTOSCALINGPOLICYREQUEST_H
#define QTAWS_PUTAUTOSCALINGPOLICYREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class PutAutoScalingPolicyRequestPrivate;

class QTAWSEMR_EXPORT PutAutoScalingPolicyRequest : public EmrRequest {

public:
    PutAutoScalingPolicyRequest(const PutAutoScalingPolicyRequest &other);
    PutAutoScalingPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAutoScalingPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
