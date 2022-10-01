// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEMANAGEDSCALINGPOLICYRESPONSE_P_H
#define QTAWS_REMOVEMANAGEDSCALINGPOLICYRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class RemoveManagedScalingPolicyResponse;

class RemoveManagedScalingPolicyResponsePrivate : public EmrResponsePrivate {

public:

    explicit RemoveManagedScalingPolicyResponsePrivate(RemoveManagedScalingPolicyResponse * const q);

    void parseRemoveManagedScalingPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveManagedScalingPolicyResponse)
    Q_DISABLE_COPY(RemoveManagedScalingPolicyResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
