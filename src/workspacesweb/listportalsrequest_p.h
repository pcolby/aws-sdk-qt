// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTALSREQUEST_P_H
#define QTAWS_LISTPORTALSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "listportalsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListPortalsRequest;

class ListPortalsRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    ListPortalsRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   ListPortalsRequest * const q);
    ListPortalsRequestPrivate(const ListPortalsRequestPrivate &other,
                                   ListPortalsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPortalsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
