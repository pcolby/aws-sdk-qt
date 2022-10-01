// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTALREQUEST_P_H
#define QTAWS_GETPORTALREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "getportalrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetPortalRequest;

class GetPortalRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    GetPortalRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   GetPortalRequest * const q);
    GetPortalRequestPrivate(const GetPortalRequestPrivate &other,
                                   GetPortalRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPortalRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
