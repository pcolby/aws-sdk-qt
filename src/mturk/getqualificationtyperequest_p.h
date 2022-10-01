// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUALIFICATIONTYPEREQUEST_P_H
#define QTAWS_GETQUALIFICATIONTYPEREQUEST_P_H

#include "mturkrequest_p.h"
#include "getqualificationtyperequest.h"

namespace QtAws {
namespace MTurk {

class GetQualificationTypeRequest;

class GetQualificationTypeRequestPrivate : public MTurkRequestPrivate {

public:
    GetQualificationTypeRequestPrivate(const MTurkRequest::Action action,
                                   GetQualificationTypeRequest * const q);
    GetQualificationTypeRequestPrivate(const GetQualificationTypeRequestPrivate &other,
                                   GetQualificationTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetQualificationTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
