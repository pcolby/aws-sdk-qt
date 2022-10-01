// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPPOLICYREQUEST_P_H
#define QTAWS_PUTBACKUPPOLICYREQUEST_P_H

#include "efsrequest_p.h"
#include "putbackuppolicyrequest.h"

namespace QtAws {
namespace Efs {

class PutBackupPolicyRequest;

class PutBackupPolicyRequestPrivate : public EfsRequestPrivate {

public:
    PutBackupPolicyRequestPrivate(const EfsRequest::Action action,
                                   PutBackupPolicyRequest * const q);
    PutBackupPolicyRequestPrivate(const PutBackupPolicyRequestPrivate &other,
                                   PutBackupPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBackupPolicyRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
