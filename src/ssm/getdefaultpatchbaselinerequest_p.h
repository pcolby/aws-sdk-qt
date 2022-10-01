// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEFAULTPATCHBASELINEREQUEST_P_H
#define QTAWS_GETDEFAULTPATCHBASELINEREQUEST_P_H

#include "ssmrequest_p.h"
#include "getdefaultpatchbaselinerequest.h"

namespace QtAws {
namespace Ssm {

class GetDefaultPatchBaselineRequest;

class GetDefaultPatchBaselineRequestPrivate : public SsmRequestPrivate {

public:
    GetDefaultPatchBaselineRequestPrivate(const SsmRequest::Action action,
                                   GetDefaultPatchBaselineRequest * const q);
    GetDefaultPatchBaselineRequestPrivate(const GetDefaultPatchBaselineRequestPrivate &other,
                                   GetDefaultPatchBaselineRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDefaultPatchBaselineRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
