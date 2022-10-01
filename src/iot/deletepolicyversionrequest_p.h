// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOLICYVERSIONREQUEST_P_H
#define QTAWS_DELETEPOLICYVERSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "deletepolicyversionrequest.h"

namespace QtAws {
namespace IoT {

class DeletePolicyVersionRequest;

class DeletePolicyVersionRequestPrivate : public IoTRequestPrivate {

public:
    DeletePolicyVersionRequestPrivate(const IoTRequest::Action action,
                                   DeletePolicyVersionRequest * const q);
    DeletePolicyVersionRequestPrivate(const DeletePolicyVersionRequestPrivate &other,
                                   DeletePolicyVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePolicyVersionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
