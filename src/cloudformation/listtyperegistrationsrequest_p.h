// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPEREGISTRATIONSREQUEST_P_H
#define QTAWS_LISTTYPEREGISTRATIONSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "listtyperegistrationsrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListTypeRegistrationsRequest;

class ListTypeRegistrationsRequestPrivate : public CloudFormationRequestPrivate {

public:
    ListTypeRegistrationsRequestPrivate(const CloudFormationRequest::Action action,
                                   ListTypeRegistrationsRequest * const q);
    ListTypeRegistrationsRequestPrivate(const ListTypeRegistrationsRequestPrivate &other,
                                   ListTypeRegistrationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTypeRegistrationsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
