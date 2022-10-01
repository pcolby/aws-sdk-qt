// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSKEYLASTUSEDREQUEST_P_H
#define QTAWS_GETACCESSKEYLASTUSEDREQUEST_P_H

#include "iamrequest_p.h"
#include "getaccesskeylastusedrequest.h"

namespace QtAws {
namespace Iam {

class GetAccessKeyLastUsedRequest;

class GetAccessKeyLastUsedRequestPrivate : public IamRequestPrivate {

public:
    GetAccessKeyLastUsedRequestPrivate(const IamRequest::Action action,
                                   GetAccessKeyLastUsedRequest * const q);
    GetAccessKeyLastUsedRequestPrivate(const GetAccessKeyLastUsedRequestPrivate &other,
                                   GetAccessKeyLastUsedRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccessKeyLastUsedRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
