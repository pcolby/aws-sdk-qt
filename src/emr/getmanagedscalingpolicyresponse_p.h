// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMANAGEDSCALINGPOLICYRESPONSE_P_H
#define QTAWS_GETMANAGEDSCALINGPOLICYRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class GetManagedScalingPolicyResponse;

class GetManagedScalingPolicyResponsePrivate : public EmrResponsePrivate {

public:

    explicit GetManagedScalingPolicyResponsePrivate(GetManagedScalingPolicyResponse * const q);

    void parseGetManagedScalingPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetManagedScalingPolicyResponse)
    Q_DISABLE_COPY(GetManagedScalingPolicyResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
