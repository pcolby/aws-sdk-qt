// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDDRAFTAPPVERSIONRESOURCEMAPPINGSREQUEST_P_H
#define QTAWS_ADDDRAFTAPPVERSIONRESOURCEMAPPINGSREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "adddraftappversionresourcemappingsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class AddDraftAppVersionResourceMappingsRequest;

class AddDraftAppVersionResourceMappingsRequestPrivate : public ResilienceHubRequestPrivate {

public:
    AddDraftAppVersionResourceMappingsRequestPrivate(const ResilienceHubRequest::Action action,
                                   AddDraftAppVersionResourceMappingsRequest * const q);
    AddDraftAppVersionResourceMappingsRequestPrivate(const AddDraftAppVersionResourceMappingsRequestPrivate &other,
                                   AddDraftAppVersionResourceMappingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddDraftAppVersionResourceMappingsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
