// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOURCESERVERSREQUEST_P_H
#define QTAWS_DESCRIBESOURCESERVERSREQUEST_P_H

#include "mgnrequest_p.h"
#include "describesourceserversrequest.h"

namespace QtAws {
namespace Mgn {

class DescribeSourceServersRequest;

class DescribeSourceServersRequestPrivate : public MgnRequestPrivate {

public:
    DescribeSourceServersRequestPrivate(const MgnRequest::Action action,
                                   DescribeSourceServersRequest * const q);
    DescribeSourceServersRequestPrivate(const DescribeSourceServersRequestPrivate &other,
                                   DescribeSourceServersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSourceServersRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
