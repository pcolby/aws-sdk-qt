// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEDRAFTAPPVERSIONRESOURCEMAPPINGSREQUEST_P_H
#define QTAWS_REMOVEDRAFTAPPVERSIONRESOURCEMAPPINGSREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "removedraftappversionresourcemappingsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class RemoveDraftAppVersionResourceMappingsRequest;

class RemoveDraftAppVersionResourceMappingsRequestPrivate : public ResilienceHubRequestPrivate {

public:
    RemoveDraftAppVersionResourceMappingsRequestPrivate(const ResilienceHubRequest::Action action,
                                   RemoveDraftAppVersionResourceMappingsRequest * const q);
    RemoveDraftAppVersionResourceMappingsRequestPrivate(const RemoveDraftAppVersionResourceMappingsRequestPrivate &other,
                                   RemoveDraftAppVersionResourceMappingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveDraftAppVersionResourceMappingsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
