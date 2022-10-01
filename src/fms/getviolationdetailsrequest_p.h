// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVIOLATIONDETAILSREQUEST_P_H
#define QTAWS_GETVIOLATIONDETAILSREQUEST_P_H

#include "fmsrequest_p.h"
#include "getviolationdetailsrequest.h"

namespace QtAws {
namespace Fms {

class GetViolationDetailsRequest;

class GetViolationDetailsRequestPrivate : public FmsRequestPrivate {

public:
    GetViolationDetailsRequestPrivate(const FmsRequest::Action action,
                                   GetViolationDetailsRequest * const q);
    GetViolationDetailsRequestPrivate(const GetViolationDetailsRequestPrivate &other,
                                   GetViolationDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetViolationDetailsRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
