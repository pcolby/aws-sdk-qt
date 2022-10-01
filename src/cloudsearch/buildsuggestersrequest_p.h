// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUILDSUGGESTERSREQUEST_P_H
#define QTAWS_BUILDSUGGESTERSREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "buildsuggestersrequest.h"

namespace QtAws {
namespace CloudSearch {

class BuildSuggestersRequest;

class BuildSuggestersRequestPrivate : public CloudSearchRequestPrivate {

public:
    BuildSuggestersRequestPrivate(const CloudSearchRequest::Action action,
                                   BuildSuggestersRequest * const q);
    BuildSuggestersRequestPrivate(const BuildSuggestersRequestPrivate &other,
                                   BuildSuggestersRequest * const q);

private:
    Q_DECLARE_PUBLIC(BuildSuggestersRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
