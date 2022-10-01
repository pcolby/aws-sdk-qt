// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFACETTOOBJECTREQUEST_P_H
#define QTAWS_ADDFACETTOOBJECTREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "addfacettoobjectrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AddFacetToObjectRequest;

class AddFacetToObjectRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    AddFacetToObjectRequestPrivate(const CloudDirectoryRequest::Action action,
                                   AddFacetToObjectRequest * const q);
    AddFacetToObjectRequestPrivate(const AddFacetToObjectRequestPrivate &other,
                                   AddFacetToObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddFacetToObjectRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
