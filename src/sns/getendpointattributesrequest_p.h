// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENDPOINTATTRIBUTESREQUEST_P_H
#define QTAWS_GETENDPOINTATTRIBUTESREQUEST_P_H

#include "snsrequest_p.h"
#include "getendpointattributesrequest.h"

namespace QtAws {
namespace Sns {

class GetEndpointAttributesRequest;

class GetEndpointAttributesRequestPrivate : public SnsRequestPrivate {

public:
    GetEndpointAttributesRequestPrivate(const SnsRequest::Action action,
                                   GetEndpointAttributesRequest * const q);
    GetEndpointAttributesRequestPrivate(const GetEndpointAttributesRequestPrivate &other,
                                   GetEndpointAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEndpointAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
