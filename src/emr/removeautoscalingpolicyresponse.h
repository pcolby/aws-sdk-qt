// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEAUTOSCALINGPOLICYRESPONSE_H
#define QTAWS_REMOVEAUTOSCALINGPOLICYRESPONSE_H

#include "emrresponse.h"
#include "removeautoscalingpolicyrequest.h"

namespace QtAws {
namespace Emr {

class RemoveAutoScalingPolicyResponsePrivate;

class QTAWSEMR_EXPORT RemoveAutoScalingPolicyResponse : public EmrResponse {
    Q_OBJECT

public:
    RemoveAutoScalingPolicyResponse(const RemoveAutoScalingPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveAutoScalingPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveAutoScalingPolicyResponse)
    Q_DISABLE_COPY(RemoveAutoScalingPolicyResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
