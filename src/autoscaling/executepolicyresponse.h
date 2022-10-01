// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEPOLICYRESPONSE_H
#define QTAWS_EXECUTEPOLICYRESPONSE_H

#include "autoscalingresponse.h"
#include "executepolicyrequest.h"

namespace QtAws {
namespace AutoScaling {

class ExecutePolicyResponsePrivate;

class QTAWSAUTOSCALING_EXPORT ExecutePolicyResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    ExecutePolicyResponse(const ExecutePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExecutePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecutePolicyResponse)
    Q_DISABLE_COPY(ExecutePolicyResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
