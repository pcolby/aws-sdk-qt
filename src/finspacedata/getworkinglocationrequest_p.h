// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKINGLOCATIONREQUEST_P_H
#define QTAWS_GETWORKINGLOCATIONREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "getworkinglocationrequest.h"

namespace QtAws {
namespace FinspaceData {

class GetWorkingLocationRequest;

class GetWorkingLocationRequestPrivate : public FinspaceDataRequestPrivate {

public:
    GetWorkingLocationRequestPrivate(const FinspaceDataRequest::Action action,
                                   GetWorkingLocationRequest * const q);
    GetWorkingLocationRequestPrivate(const GetWorkingLocationRequestPrivate &other,
                                   GetWorkingLocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkingLocationRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
