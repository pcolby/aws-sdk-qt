// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFACETREQUEST_P_H
#define QTAWS_UPDATEFACETREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "updatefacetrequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateFacetRequest;

class UpdateFacetRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    UpdateFacetRequestPrivate(const CloudDirectoryRequest::Action action,
                                   UpdateFacetRequest * const q);
    UpdateFacetRequestPrivate(const UpdateFacetRequestPrivate &other,
                                   UpdateFacetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFacetRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
