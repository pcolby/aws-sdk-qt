// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYOPTIONGROUPREQUEST_P_H
#define QTAWS_COPYOPTIONGROUPREQUEST_P_H

#include "rdsrequest_p.h"
#include "copyoptiongrouprequest.h"

namespace QtAws {
namespace Rds {

class CopyOptionGroupRequest;

class CopyOptionGroupRequestPrivate : public RdsRequestPrivate {

public:
    CopyOptionGroupRequestPrivate(const RdsRequest::Action action,
                                   CopyOptionGroupRequest * const q);
    CopyOptionGroupRequestPrivate(const CopyOptionGroupRequestPrivate &other,
                                   CopyOptionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyOptionGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
