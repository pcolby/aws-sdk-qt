// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAUTOSCALINGPOLICYRESPONSE_H
#define QTAWS_PUTAUTOSCALINGPOLICYRESPONSE_H

#include "emrresponse.h"
#include "putautoscalingpolicyrequest.h"

namespace QtAws {
namespace Emr {

class PutAutoScalingPolicyResponsePrivate;

class QTAWSEMR_EXPORT PutAutoScalingPolicyResponse : public EmrResponse {
    Q_OBJECT

public:
    PutAutoScalingPolicyResponse(const PutAutoScalingPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAutoScalingPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAutoScalingPolicyResponse)
    Q_DISABLE_COPY(PutAutoScalingPolicyResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
