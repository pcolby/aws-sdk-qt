// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHITSFORQUALIFICATIONTYPEREQUEST_P_H
#define QTAWS_LISTHITSFORQUALIFICATIONTYPEREQUEST_P_H

#include "mturkrequest_p.h"
#include "listhitsforqualificationtyperequest.h"

namespace QtAws {
namespace MTurk {

class ListHITsForQualificationTypeRequest;

class ListHITsForQualificationTypeRequestPrivate : public MTurkRequestPrivate {

public:
    ListHITsForQualificationTypeRequestPrivate(const MTurkRequest::Action action,
                                   ListHITsForQualificationTypeRequest * const q);
    ListHITsForQualificationTypeRequestPrivate(const ListHITsForQualificationTypeRequestPrivate &other,
                                   ListHITsForQualificationTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHITsForQualificationTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
