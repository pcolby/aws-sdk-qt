// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCALINGPOLICYRESPONSE_H
#define QTAWS_DELETESCALINGPOLICYRESPONSE_H

#include "applicationautoscalingresponse.h"
#include "deletescalingpolicyrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DeleteScalingPolicyResponsePrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT DeleteScalingPolicyResponse : public ApplicationAutoScalingResponse {
    Q_OBJECT

public:
    DeleteScalingPolicyResponse(const DeleteScalingPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteScalingPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteScalingPolicyResponse)
    Q_DISABLE_COPY(DeleteScalingPolicyResponse)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
