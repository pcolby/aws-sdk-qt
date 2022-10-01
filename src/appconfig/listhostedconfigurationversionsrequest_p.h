// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDCONFIGURATIONVERSIONSREQUEST_P_H
#define QTAWS_LISTHOSTEDCONFIGURATIONVERSIONSREQUEST_P_H

#include "appconfigrequest_p.h"
#include "listhostedconfigurationversionsrequest.h"

namespace QtAws {
namespace AppConfig {

class ListHostedConfigurationVersionsRequest;

class ListHostedConfigurationVersionsRequestPrivate : public AppConfigRequestPrivate {

public:
    ListHostedConfigurationVersionsRequestPrivate(const AppConfigRequest::Action action,
                                   ListHostedConfigurationVersionsRequest * const q);
    ListHostedConfigurationVersionsRequestPrivate(const ListHostedConfigurationVersionsRequestPrivate &other,
                                   ListHostedConfigurationVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHostedConfigurationVersionsRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
