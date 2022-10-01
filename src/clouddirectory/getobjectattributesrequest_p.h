// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTATTRIBUTESREQUEST_P_H
#define QTAWS_GETOBJECTATTRIBUTESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "getobjectattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetObjectAttributesRequest;

class GetObjectAttributesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    GetObjectAttributesRequestPrivate(const CloudDirectoryRequest::Action action,
                                   GetObjectAttributesRequest * const q);
    GetObjectAttributesRequestPrivate(const GetObjectAttributesRequestPrivate &other,
                                   GetObjectAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetObjectAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
