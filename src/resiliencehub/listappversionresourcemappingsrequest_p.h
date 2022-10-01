// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPVERSIONRESOURCEMAPPINGSREQUEST_P_H
#define QTAWS_LISTAPPVERSIONRESOURCEMAPPINGSREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "listappversionresourcemappingsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppVersionResourceMappingsRequest;

class ListAppVersionResourceMappingsRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ListAppVersionResourceMappingsRequestPrivate(const ResilienceHubRequest::Action action,
                                   ListAppVersionResourceMappingsRequest * const q);
    ListAppVersionResourceMappingsRequestPrivate(const ListAppVersionResourceMappingsRequestPrivate &other,
                                   ListAppVersionResourceMappingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppVersionResourceMappingsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
