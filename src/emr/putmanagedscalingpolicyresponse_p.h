// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMANAGEDSCALINGPOLICYRESPONSE_P_H
#define QTAWS_PUTMANAGEDSCALINGPOLICYRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class PutManagedScalingPolicyResponse;

class PutManagedScalingPolicyResponsePrivate : public EmrResponsePrivate {

public:

    explicit PutManagedScalingPolicyResponsePrivate(PutManagedScalingPolicyResponse * const q);

    void parsePutManagedScalingPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutManagedScalingPolicyResponse)
    Q_DISABLE_COPY(PutManagedScalingPolicyResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
