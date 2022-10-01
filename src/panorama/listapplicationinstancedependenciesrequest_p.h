// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONINSTANCEDEPENDENCIESREQUEST_P_H
#define QTAWS_LISTAPPLICATIONINSTANCEDEPENDENCIESREQUEST_P_H

#include "panoramarequest_p.h"
#include "listapplicationinstancedependenciesrequest.h"

namespace QtAws {
namespace Panorama {

class ListApplicationInstanceDependenciesRequest;

class ListApplicationInstanceDependenciesRequestPrivate : public PanoramaRequestPrivate {

public:
    ListApplicationInstanceDependenciesRequestPrivate(const PanoramaRequest::Action action,
                                   ListApplicationInstanceDependenciesRequest * const q);
    ListApplicationInstanceDependenciesRequestPrivate(const ListApplicationInstanceDependenciesRequestPrivate &other,
                                   ListApplicationInstanceDependenciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationInstanceDependenciesRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
