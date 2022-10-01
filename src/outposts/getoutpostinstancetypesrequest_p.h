// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOUTPOSTINSTANCETYPESREQUEST_P_H
#define QTAWS_GETOUTPOSTINSTANCETYPESREQUEST_P_H

#include "outpostsrequest_p.h"
#include "getoutpostinstancetypesrequest.h"

namespace QtAws {
namespace Outposts {

class GetOutpostInstanceTypesRequest;

class GetOutpostInstanceTypesRequestPrivate : public OutpostsRequestPrivate {

public:
    GetOutpostInstanceTypesRequestPrivate(const OutpostsRequest::Action action,
                                   GetOutpostInstanceTypesRequest * const q);
    GetOutpostInstanceTypesRequestPrivate(const GetOutpostInstanceTypesRequestPrivate &other,
                                   GetOutpostInstanceTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOutpostInstanceTypesRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
