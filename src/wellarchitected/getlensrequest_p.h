// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLENSREQUEST_P_H
#define QTAWS_GETLENSREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "getlensrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetLensRequest;

class GetLensRequestPrivate : public WellArchitectedRequestPrivate {

public:
    GetLensRequestPrivate(const WellArchitectedRequest::Action action,
                                   GetLensRequest * const q);
    GetLensRequestPrivate(const GetLensRequestPrivate &other,
                                   GetLensRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLensRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
