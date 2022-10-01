// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSREQUEST_P_H
#define QTAWS_LISTAPPLICATIONSREQUEST_P_H

#include "appconfigrequest_p.h"
#include "listapplicationsrequest.h"

namespace QtAws {
namespace AppConfig {

class ListApplicationsRequest;

class ListApplicationsRequestPrivate : public AppConfigRequestPrivate {

public:
    ListApplicationsRequestPrivate(const AppConfigRequest::Action action,
                                   ListApplicationsRequest * const q);
    ListApplicationsRequestPrivate(const ListApplicationsRequestPrivate &other,
                                   ListApplicationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationsRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
