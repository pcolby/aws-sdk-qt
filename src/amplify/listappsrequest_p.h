// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPSREQUEST_P_H
#define QTAWS_LISTAPPSREQUEST_P_H

#include "amplifyrequest_p.h"
#include "listappsrequest.h"

namespace QtAws {
namespace Amplify {

class ListAppsRequest;

class ListAppsRequestPrivate : public AmplifyRequestPrivate {

public:
    ListAppsRequestPrivate(const AmplifyRequest::Action action,
                                   ListAppsRequest * const q);
    ListAppsRequestPrivate(const ListAppsRequestPrivate &other,
                                   ListAppsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppsRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
