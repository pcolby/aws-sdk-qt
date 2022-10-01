// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPREQUEST_P_H
#define QTAWS_GETGROUPREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "getgrouprequest.h"

namespace QtAws {
namespace Synthetics {

class GetGroupRequest;

class GetGroupRequestPrivate : public SyntheticsRequestPrivate {

public:
    GetGroupRequestPrivate(const SyntheticsRequest::Action action,
                                   GetGroupRequest * const q);
    GetGroupRequestPrivate(const GetGroupRequestPrivate &other,
                                   GetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGroupRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
