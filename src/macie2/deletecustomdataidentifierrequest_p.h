// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMDATAIDENTIFIERREQUEST_P_H
#define QTAWS_DELETECUSTOMDATAIDENTIFIERREQUEST_P_H

#include "macie2request_p.h"
#include "deletecustomdataidentifierrequest.h"

namespace QtAws {
namespace Macie2 {

class DeleteCustomDataIdentifierRequest;

class DeleteCustomDataIdentifierRequestPrivate : public Macie2RequestPrivate {

public:
    DeleteCustomDataIdentifierRequestPrivate(const Macie2Request::Action action,
                                   DeleteCustomDataIdentifierRequest * const q);
    DeleteCustomDataIdentifierRequestPrivate(const DeleteCustomDataIdentifierRequestPrivate &other,
                                   DeleteCustomDataIdentifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomDataIdentifierRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
