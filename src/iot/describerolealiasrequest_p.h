// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROLEALIASREQUEST_P_H
#define QTAWS_DESCRIBEROLEALIASREQUEST_P_H

#include "iotrequest_p.h"
#include "describerolealiasrequest.h"

namespace QtAws {
namespace IoT {

class DescribeRoleAliasRequest;

class DescribeRoleAliasRequestPrivate : public IoTRequestPrivate {

public:
    DescribeRoleAliasRequestPrivate(const IoTRequest::Action action,
                                   DescribeRoleAliasRequest * const q);
    DescribeRoleAliasRequestPrivate(const DescribeRoleAliasRequestPrivate &other,
                                   DescribeRoleAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRoleAliasRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
