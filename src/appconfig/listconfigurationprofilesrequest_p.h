// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONPROFILESREQUEST_P_H
#define QTAWS_LISTCONFIGURATIONPROFILESREQUEST_P_H

#include "appconfigrequest_p.h"
#include "listconfigurationprofilesrequest.h"

namespace QtAws {
namespace AppConfig {

class ListConfigurationProfilesRequest;

class ListConfigurationProfilesRequestPrivate : public AppConfigRequestPrivate {

public:
    ListConfigurationProfilesRequestPrivate(const AppConfigRequest::Action action,
                                   ListConfigurationProfilesRequest * const q);
    ListConfigurationProfilesRequestPrivate(const ListConfigurationProfilesRequestPrivate &other,
                                   ListConfigurationProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConfigurationProfilesRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
