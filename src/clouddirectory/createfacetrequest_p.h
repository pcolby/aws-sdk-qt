// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFACETREQUEST_P_H
#define QTAWS_CREATEFACETREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "createfacetrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateFacetRequest;

class CreateFacetRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    CreateFacetRequestPrivate(const CloudDirectoryRequest::Action action,
                                   CreateFacetRequest * const q);
    CreateFacetRequestPrivate(const CreateFacetRequestPrivate &other,
                                   CreateFacetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFacetRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
