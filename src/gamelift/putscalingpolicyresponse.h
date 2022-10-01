// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCALINGPOLICYRESPONSE_H
#define QTAWS_PUTSCALINGPOLICYRESPONSE_H

#include "gameliftresponse.h"
#include "putscalingpolicyrequest.h"

namespace QtAws {
namespace GameLift {

class PutScalingPolicyResponsePrivate;

class QTAWSGAMELIFT_EXPORT PutScalingPolicyResponse : public GameLiftResponse {
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

} // namespace GameLift
} // namespace QtAws

#endif
