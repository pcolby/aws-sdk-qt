// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMDATAIDENTIFIERREQUEST_P_H
#define QTAWS_CREATECUSTOMDATAIDENTIFIERREQUEST_P_H

#include "macie2request_p.h"
#include "createcustomdataidentifierrequest.h"

namespace QtAws {
namespace Macie2 {

class CreateCustomDataIdentifierRequest;

class CreateCustomDataIdentifierRequestPrivate : public Macie2RequestPrivate {

public:
    CreateCustomDataIdentifierRequestPrivate(const Macie2Request::Action action,
                                   CreateCustomDataIdentifierRequest * const q);
    CreateCustomDataIdentifierRequestPrivate(const CreateCustomDataIdentifierRequestPrivate &other,
                                   CreateCustomDataIdentifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomDataIdentifierRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
