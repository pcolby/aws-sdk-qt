// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESREQUEST_P_H
#define QTAWS_GETRESOURCESREQUEST_P_H

#include "workdocsrequest_p.h"
#include "getresourcesrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetResourcesRequest;

class GetResourcesRequestPrivate : public WorkDocsRequestPrivate {

public:
    GetResourcesRequestPrivate(const WorkDocsRequest::Action action,
                                   GetResourcesRequest * const q);
    GetResourcesRequestPrivate(const GetResourcesRequestPrivate &other,
                                   GetResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourcesRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
