// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCURRENTUSERREQUEST_P_H
#define QTAWS_GETCURRENTUSERREQUEST_P_H

#include "workdocsrequest_p.h"
#include "getcurrentuserrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetCurrentUserRequest;

class GetCurrentUserRequestPrivate : public WorkDocsRequestPrivate {

public:
    GetCurrentUserRequestPrivate(const WorkDocsRequest::Action action,
                                   GetCurrentUserRequest * const q);
    GetCurrentUserRequestPrivate(const GetCurrentUserRequestPrivate &other,
                                   GetCurrentUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCurrentUserRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
