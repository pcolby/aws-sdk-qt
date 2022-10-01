// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPORTALREQUEST_P_H
#define QTAWS_UPDATEPORTALREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "updateportalrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdatePortalRequest;

class UpdatePortalRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    UpdatePortalRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   UpdatePortalRequest * const q);
    UpdatePortalRequestPrivate(const UpdatePortalRequestPrivate &other,
                                   UpdatePortalRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePortalRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
