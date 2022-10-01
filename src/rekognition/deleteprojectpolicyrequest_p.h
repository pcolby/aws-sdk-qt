// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTPOLICYREQUEST_P_H
#define QTAWS_DELETEPROJECTPOLICYREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "deleteprojectpolicyrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteProjectPolicyRequest;

class DeleteProjectPolicyRequestPrivate : public RekognitionRequestPrivate {

public:
    DeleteProjectPolicyRequestPrivate(const RekognitionRequest::Action action,
                                   DeleteProjectPolicyRequest * const q);
    DeleteProjectPolicyRequestPrivate(const DeleteProjectPolicyRequestPrivate &other,
                                   DeleteProjectPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProjectPolicyRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
