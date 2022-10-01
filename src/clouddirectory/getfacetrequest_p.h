// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFACETREQUEST_P_H
#define QTAWS_GETFACETREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "getfacetrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetFacetRequest;

class GetFacetRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    GetFacetRequestPrivate(const CloudDirectoryRequest::Action action,
                                   GetFacetRequest * const q);
    GetFacetRequestPrivate(const GetFacetRequestPrivate &other,
                                   GetFacetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFacetRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
