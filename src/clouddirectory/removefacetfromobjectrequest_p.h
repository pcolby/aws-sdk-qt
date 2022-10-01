// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFACETFROMOBJECTREQUEST_P_H
#define QTAWS_REMOVEFACETFROMOBJECTREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "removefacetfromobjectrequest.h"

namespace QtAws {
namespace CloudDirectory {

class RemoveFacetFromObjectRequest;

class RemoveFacetFromObjectRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    RemoveFacetFromObjectRequestPrivate(const CloudDirectoryRequest::Action action,
                                   RemoveFacetFromObjectRequest * const q);
    RemoveFacetFromObjectRequestPrivate(const RemoveFacetFromObjectRequestPrivate &other,
                                   RemoveFacetFromObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveFacetFromObjectRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
