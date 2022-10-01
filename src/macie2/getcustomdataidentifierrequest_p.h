// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMDATAIDENTIFIERREQUEST_P_H
#define QTAWS_GETCUSTOMDATAIDENTIFIERREQUEST_P_H

#include "macie2request_p.h"
#include "getcustomdataidentifierrequest.h"

namespace QtAws {
namespace Macie2 {

class GetCustomDataIdentifierRequest;

class GetCustomDataIdentifierRequestPrivate : public Macie2RequestPrivate {

public:
    GetCustomDataIdentifierRequestPrivate(const Macie2Request::Action action,
                                   GetCustomDataIdentifierRequest * const q);
    GetCustomDataIdentifierRequestPrivate(const GetCustomDataIdentifierRequestPrivate &other,
                                   GetCustomDataIdentifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCustomDataIdentifierRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
