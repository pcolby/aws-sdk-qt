// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGISTRYPOLICYREQUEST_P_H
#define QTAWS_DELETEREGISTRYPOLICYREQUEST_P_H

#include "ecrrequest_p.h"
#include "deleteregistrypolicyrequest.h"

namespace QtAws {
namespace Ecr {

class DeleteRegistryPolicyRequest;

class DeleteRegistryPolicyRequestPrivate : public EcrRequestPrivate {

public:
    DeleteRegistryPolicyRequestPrivate(const EcrRequest::Action action,
                                   DeleteRegistryPolicyRequest * const q);
    DeleteRegistryPolicyRequestPrivate(const DeleteRegistryPolicyRequestPrivate &other,
                                   DeleteRegistryPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRegistryPolicyRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
