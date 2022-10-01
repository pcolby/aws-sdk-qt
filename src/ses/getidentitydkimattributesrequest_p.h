// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYDKIMATTRIBUTESREQUEST_P_H
#define QTAWS_GETIDENTITYDKIMATTRIBUTESREQUEST_P_H

#include "sesrequest_p.h"
#include "getidentitydkimattributesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityDkimAttributesRequest;

class GetIdentityDkimAttributesRequestPrivate : public SesRequestPrivate {

public:
    GetIdentityDkimAttributesRequestPrivate(const SesRequest::Action action,
                                   GetIdentityDkimAttributesRequest * const q);
    GetIdentityDkimAttributesRequestPrivate(const GetIdentityDkimAttributesRequestPrivate &other,
                                   GetIdentityDkimAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIdentityDkimAttributesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
