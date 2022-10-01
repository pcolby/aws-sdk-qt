// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROJECTPOLICYREQUEST_P_H
#define QTAWS_PUTPROJECTPOLICYREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "putprojectpolicyrequest.h"

namespace QtAws {
namespace Rekognition {

class PutProjectPolicyRequest;

class PutProjectPolicyRequestPrivate : public RekognitionRequestPrivate {

public:
    PutProjectPolicyRequestPrivate(const RekognitionRequest::Action action,
                                   PutProjectPolicyRequest * const q);
    PutProjectPolicyRequestPrivate(const PutProjectPolicyRequestPrivate &other,
                                   PutProjectPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutProjectPolicyRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
