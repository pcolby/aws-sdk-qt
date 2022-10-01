// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFILTERREQUEST_P_H
#define QTAWS_GETFILTERREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "getfilterrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetFilterRequest;

class GetFilterRequestPrivate : public GuardDutyRequestPrivate {

public:
    GetFilterRequestPrivate(const GuardDutyRequest::Action action,
                                   GetFilterRequest * const q);
    GetFilterRequestPrivate(const GetFilterRequestPrivate &other,
                                   GetFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFilterRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
