// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPORTSREQUEST_P_H
#define QTAWS_LISTEXPORTSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "listexportsrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListExportsRequest;

class ListExportsRequestPrivate : public CloudFormationRequestPrivate {

public:
    ListExportsRequestPrivate(const CloudFormationRequest::Action action,
                                   ListExportsRequest * const q);
    ListExportsRequestPrivate(const ListExportsRequestPrivate &other,
                                   ListExportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExportsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
