// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTSREQUEST_P_H
#define QTAWS_LISTIMPORTSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "listimportsrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListImportsRequest;

class ListImportsRequestPrivate : public CloudFormationRequestPrivate {

public:
    ListImportsRequestPrivate(const CloudFormationRequest::Action action,
                                   ListImportsRequest * const q);
    ListImportsRequestPrivate(const ListImportsRequestPrivate &other,
                                   ListImportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImportsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
