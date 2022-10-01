// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGINSTANCEPROFILEREQUEST_P_H
#define QTAWS_TAGINSTANCEPROFILEREQUEST_P_H

#include "iamrequest_p.h"
#include "taginstanceprofilerequest.h"

namespace QtAws {
namespace Iam {

class TagInstanceProfileRequest;

class TagInstanceProfileRequestPrivate : public IamRequestPrivate {

public:
    TagInstanceProfileRequestPrivate(const IamRequest::Action action,
                                   TagInstanceProfileRequest * const q);
    TagInstanceProfileRequestPrivate(const TagInstanceProfileRequestPrivate &other,
                                   TagInstanceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagInstanceProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
