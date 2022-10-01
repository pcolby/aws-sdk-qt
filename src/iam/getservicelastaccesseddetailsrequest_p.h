// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICELASTACCESSEDDETAILSREQUEST_P_H
#define QTAWS_GETSERVICELASTACCESSEDDETAILSREQUEST_P_H

#include "iamrequest_p.h"
#include "getservicelastaccesseddetailsrequest.h"

namespace QtAws {
namespace Iam {

class GetServiceLastAccessedDetailsRequest;

class GetServiceLastAccessedDetailsRequestPrivate : public IamRequestPrivate {

public:
    GetServiceLastAccessedDetailsRequestPrivate(const IamRequest::Action action,
                                   GetServiceLastAccessedDetailsRequest * const q);
    GetServiceLastAccessedDetailsRequestPrivate(const GetServiceLastAccessedDetailsRequestPrivate &other,
                                   GetServiceLastAccessedDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceLastAccessedDetailsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
