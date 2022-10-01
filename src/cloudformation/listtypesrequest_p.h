// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPESREQUEST_P_H
#define QTAWS_LISTTYPESREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "listtypesrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListTypesRequest;

class ListTypesRequestPrivate : public CloudFormationRequestPrivate {

public:
    ListTypesRequestPrivate(const CloudFormationRequest::Action action,
                                   ListTypesRequest * const q);
    ListTypesRequestPrivate(const ListTypesRequestPrivate &other,
                                   ListTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTypesRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
