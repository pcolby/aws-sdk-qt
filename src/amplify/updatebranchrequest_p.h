// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBRANCHREQUEST_P_H
#define QTAWS_UPDATEBRANCHREQUEST_P_H

#include "amplifyrequest_p.h"
#include "updatebranchrequest.h"

namespace QtAws {
namespace Amplify {

class UpdateBranchRequest;

class UpdateBranchRequestPrivate : public AmplifyRequestPrivate {

public:
    UpdateBranchRequestPrivate(const AmplifyRequest::Action action,
                                   UpdateBranchRequest * const q);
    UpdateBranchRequestPrivate(const UpdateBranchRequestPrivate &other,
                                   UpdateBranchRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBranchRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
