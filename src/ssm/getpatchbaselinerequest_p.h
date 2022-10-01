// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPATCHBASELINEREQUEST_P_H
#define QTAWS_GETPATCHBASELINEREQUEST_P_H

#include "ssmrequest_p.h"
#include "getpatchbaselinerequest.h"

namespace QtAws {
namespace Ssm {

class GetPatchBaselineRequest;

class GetPatchBaselineRequestPrivate : public SsmRequestPrivate {

public:
    GetPatchBaselineRequestPrivate(const SsmRequest::Action action,
                                   GetPatchBaselineRequest * const q);
    GetPatchBaselineRequestPrivate(const GetPatchBaselineRequestPrivate &other,
                                   GetPatchBaselineRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPatchBaselineRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
