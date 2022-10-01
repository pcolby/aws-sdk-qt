// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKLOADREQUEST_P_H
#define QTAWS_GETWORKLOADREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "getworkloadrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetWorkloadRequest;

class GetWorkloadRequestPrivate : public WellArchitectedRequestPrivate {

public:
    GetWorkloadRequestPrivate(const WellArchitectedRequest::Action action,
                                   GetWorkloadRequest * const q);
    GetWorkloadRequestPrivate(const GetWorkloadRequestPrivate &other,
                                   GetWorkloadRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkloadRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
