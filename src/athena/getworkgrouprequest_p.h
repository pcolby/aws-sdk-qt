// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKGROUPREQUEST_P_H
#define QTAWS_GETWORKGROUPREQUEST_P_H

#include "athenarequest_p.h"
#include "getworkgrouprequest.h"

namespace QtAws {
namespace Athena {

class GetWorkGroupRequest;

class GetWorkGroupRequestPrivate : public AthenaRequestPrivate {

public:
    GetWorkGroupRequestPrivate(const AthenaRequest::Action action,
                                   GetWorkGroupRequest * const q);
    GetWorkGroupRequestPrivate(const GetWorkGroupRequestPrivate &other,
                                   GetWorkGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkGroupRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
