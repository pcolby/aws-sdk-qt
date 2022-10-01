// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENSITIVEDATAOCCURRENCESAVAILABILITYREQUEST_P_H
#define QTAWS_GETSENSITIVEDATAOCCURRENCESAVAILABILITYREQUEST_P_H

#include "macie2request_p.h"
#include "getsensitivedataoccurrencesavailabilityrequest.h"

namespace QtAws {
namespace Macie2 {

class GetSensitiveDataOccurrencesAvailabilityRequest;

class GetSensitiveDataOccurrencesAvailabilityRequestPrivate : public Macie2RequestPrivate {

public:
    GetSensitiveDataOccurrencesAvailabilityRequestPrivate(const Macie2Request::Action action,
                                   GetSensitiveDataOccurrencesAvailabilityRequest * const q);
    GetSensitiveDataOccurrencesAvailabilityRequestPrivate(const GetSensitiveDataOccurrencesAvailabilityRequestPrivate &other,
                                   GetSensitiveDataOccurrencesAvailabilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSensitiveDataOccurrencesAvailabilityRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
