// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFACETREQUEST_P_H
#define QTAWS_DELETEFACETREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "deletefacetrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DeleteFacetRequest;

class DeleteFacetRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    DeleteFacetRequestPrivate(const CloudDirectoryRequest::Action action,
                                   DeleteFacetRequest * const q);
    DeleteFacetRequestPrivate(const DeleteFacetRequestPrivate &other,
                                   DeleteFacetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFacetRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
