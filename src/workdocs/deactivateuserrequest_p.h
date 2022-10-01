// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEUSERREQUEST_P_H
#define QTAWS_DEACTIVATEUSERREQUEST_P_H

#include "workdocsrequest_p.h"
#include "deactivateuserrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeactivateUserRequest;

class DeactivateUserRequestPrivate : public WorkDocsRequestPrivate {

public:
    DeactivateUserRequestPrivate(const WorkDocsRequest::Action action,
                                   DeactivateUserRequest * const q);
    DeactivateUserRequestPrivate(const DeactivateUserRequestPrivate &other,
                                   DeactivateUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeactivateUserRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
