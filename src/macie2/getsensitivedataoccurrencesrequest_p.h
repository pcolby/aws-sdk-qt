// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENSITIVEDATAOCCURRENCESREQUEST_P_H
#define QTAWS_GETSENSITIVEDATAOCCURRENCESREQUEST_P_H

#include "macie2request_p.h"
#include "getsensitivedataoccurrencesrequest.h"

namespace QtAws {
namespace Macie2 {

class GetSensitiveDataOccurrencesRequest;

class GetSensitiveDataOccurrencesRequestPrivate : public Macie2RequestPrivate {

public:
    GetSensitiveDataOccurrencesRequestPrivate(const Macie2Request::Action action,
                                   GetSensitiveDataOccurrencesRequest * const q);
    GetSensitiveDataOccurrencesRequestPrivate(const GetSensitiveDataOccurrencesRequestPrivate &other,
                                   GetSensitiveDataOccurrencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSensitiveDataOccurrencesRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
