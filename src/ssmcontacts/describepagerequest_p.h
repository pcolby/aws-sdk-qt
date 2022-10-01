// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPAGEREQUEST_P_H
#define QTAWS_DESCRIBEPAGEREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "describepagerequest.h"

namespace QtAws {
namespace SsmContacts {

class DescribePageRequest;

class DescribePageRequestPrivate : public SsmContactsRequestPrivate {

public:
    DescribePageRequestPrivate(const SsmContactsRequest::Action action,
                                   DescribePageRequest * const q);
    DescribePageRequestPrivate(const DescribePageRequestPrivate &other,
                                   DescribePageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePageRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
