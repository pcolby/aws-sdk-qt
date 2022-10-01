// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGUSERREQUEST_P_H
#define QTAWS_TAGUSERREQUEST_P_H

#include "iamrequest_p.h"
#include "taguserrequest.h"

namespace QtAws {
namespace Iam {

class TagUserRequest;

class TagUserRequestPrivate : public IamRequestPrivate {

public:
    TagUserRequestPrivate(const IamRequest::Action action,
                                   TagUserRequest * const q);
    TagUserRequestPrivate(const TagUserRequestPrivate &other,
                                   TagUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagUserRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
