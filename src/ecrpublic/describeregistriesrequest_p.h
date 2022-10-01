// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGISTRIESREQUEST_P_H
#define QTAWS_DESCRIBEREGISTRIESREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "describeregistriesrequest.h"

namespace QtAws {
namespace EcrPublic {

class DescribeRegistriesRequest;

class DescribeRegistriesRequestPrivate : public EcrPublicRequestPrivate {

public:
    DescribeRegistriesRequestPrivate(const EcrPublicRequest::Action action,
                                   DescribeRegistriesRequest * const q);
    DescribeRegistriesRequestPrivate(const DescribeRegistriesRequestPrivate &other,
                                   DescribeRegistriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRegistriesRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
