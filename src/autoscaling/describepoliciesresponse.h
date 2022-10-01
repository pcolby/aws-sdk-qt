// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPOLICIESRESPONSE_H
#define QTAWS_DESCRIBEPOLICIESRESPONSE_H

#include "autoscalingresponse.h"
#include "describepoliciesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribePoliciesResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribePoliciesResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribePoliciesResponse(const DescribePoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePoliciesResponse)
    Q_DISABLE_COPY(DescribePoliciesResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
