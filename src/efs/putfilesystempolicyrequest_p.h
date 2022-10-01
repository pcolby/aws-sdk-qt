// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFILESYSTEMPOLICYREQUEST_P_H
#define QTAWS_PUTFILESYSTEMPOLICYREQUEST_P_H

#include "efsrequest_p.h"
#include "putfilesystempolicyrequest.h"

namespace QtAws {
namespace Efs {

class PutFileSystemPolicyRequest;

class PutFileSystemPolicyRequestPrivate : public EfsRequestPrivate {

public:
    PutFileSystemPolicyRequestPrivate(const EfsRequest::Action action,
                                   PutFileSystemPolicyRequest * const q);
    PutFileSystemPolicyRequestPrivate(const PutFileSystemPolicyRequestPrivate &other,
                                   PutFileSystemPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutFileSystemPolicyRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
