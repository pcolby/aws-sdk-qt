// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGINSTANCEPROFILEREQUEST_P_H
#define QTAWS_UNTAGINSTANCEPROFILEREQUEST_P_H

#include "iamrequest_p.h"
#include "untaginstanceprofilerequest.h"

namespace QtAws {
namespace Iam {

class UntagInstanceProfileRequest;

class UntagInstanceProfileRequestPrivate : public IamRequestPrivate {

public:
    UntagInstanceProfileRequestPrivate(const IamRequest::Action action,
                                   UntagInstanceProfileRequest * const q);
    UntagInstanceProfileRequestPrivate(const UntagInstanceProfileRequestPrivate &other,
                                   UntagInstanceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagInstanceProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
