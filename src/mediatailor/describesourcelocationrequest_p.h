// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOURCELOCATIONREQUEST_P_H
#define QTAWS_DESCRIBESOURCELOCATIONREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "describesourcelocationrequest.h"

namespace QtAws {
namespace MediaTailor {

class DescribeSourceLocationRequest;

class DescribeSourceLocationRequestPrivate : public MediaTailorRequestPrivate {

public:
    DescribeSourceLocationRequestPrivate(const MediaTailorRequest::Action action,
                                   DescribeSourceLocationRequest * const q);
    DescribeSourceLocationRequestPrivate(const DescribeSourceLocationRequestPrivate &other,
                                   DescribeSourceLocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSourceLocationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
