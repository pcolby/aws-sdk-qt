// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVECOMPONENTCANDIDATESREQUEST_P_H
#define QTAWS_RESOLVECOMPONENTCANDIDATESREQUEST_P_H

#include "greengrassv2request_p.h"
#include "resolvecomponentcandidatesrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class ResolveComponentCandidatesRequest;

class ResolveComponentCandidatesRequestPrivate : public GreengrassV2RequestPrivate {

public:
    ResolveComponentCandidatesRequestPrivate(const GreengrassV2Request::Action action,
                                   ResolveComponentCandidatesRequest * const q);
    ResolveComponentCandidatesRequestPrivate(const ResolveComponentCandidatesRequestPrivate &other,
                                   ResolveComponentCandidatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResolveComponentCandidatesRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
