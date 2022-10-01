// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCALINGPOLICYRESPONSE_H
#define QTAWS_PUTSCALINGPOLICYRESPONSE_H

#include "applicationautoscalingresponse.h"
#include "putscalingpolicyrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class PutScalingPolicyResponsePrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT PutScalingPolicyResponse : public ApplicationAutoScalingResponse {
    Q_OBJECT

public:
    PutScalingPolicyResponse(const PutScalingPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutScalingPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutScalingPolicyResponse)
    Q_DISABLE_COPY(PutScalingPolicyResponse)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
