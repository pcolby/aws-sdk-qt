// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETENDPOINTATTRIBUTESREQUEST_P_H
#define QTAWS_SETENDPOINTATTRIBUTESREQUEST_P_H

#include "snsrequest_p.h"
#include "setendpointattributesrequest.h"

namespace QtAws {
namespace Sns {

class SetEndpointAttributesRequest;

class SetEndpointAttributesRequestPrivate : public SnsRequestPrivate {

public:
    SetEndpointAttributesRequestPrivate(const SnsRequest::Action action,
                                   SetEndpointAttributesRequest * const q);
    SetEndpointAttributesRequestPrivate(const SetEndpointAttributesRequestPrivate &other,
                                   SetEndpointAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetEndpointAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
