// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTWORKSPACESREQUEST_P_H
#define QTAWS_REBOOTWORKSPACESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "rebootworkspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class RebootWorkspacesRequest;

class RebootWorkspacesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    RebootWorkspacesRequestPrivate(const WorkSpacesRequest::Action action,
                                   RebootWorkspacesRequest * const q);
    RebootWorkspacesRequestPrivate(const RebootWorkspacesRequestPrivate &other,
                                   RebootWorkspacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebootWorkspacesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
