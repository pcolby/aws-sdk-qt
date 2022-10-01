// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEUSERREQUEST_P_H
#define QTAWS_ACTIVATEUSERREQUEST_P_H

#include "workdocsrequest_p.h"
#include "activateuserrequest.h"

namespace QtAws {
namespace WorkDocs {

class ActivateUserRequest;

class ActivateUserRequestPrivate : public WorkDocsRequestPrivate {

public:
    ActivateUserRequestPrivate(const WorkDocsRequest::Action action,
                                   ActivateUserRequest * const q);
    ActivateUserRequestPrivate(const ActivateUserRequestPrivate &other,
                                   ActivateUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(ActivateUserRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
