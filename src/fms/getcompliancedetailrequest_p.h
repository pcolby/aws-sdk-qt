// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCEDETAILREQUEST_P_H
#define QTAWS_GETCOMPLIANCEDETAILREQUEST_P_H

#include "fmsrequest_p.h"
#include "getcompliancedetailrequest.h"

namespace QtAws {
namespace Fms {

class GetComplianceDetailRequest;

class GetComplianceDetailRequestPrivate : public FmsRequestPrivate {

public:
    GetComplianceDetailRequestPrivate(const FmsRequest::Action action,
                                   GetComplianceDetailRequest * const q);
    GetComplianceDetailRequestPrivate(const GetComplianceDetailRequestPrivate &other,
                                   GetComplianceDetailRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetComplianceDetailRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
