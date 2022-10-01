// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKERSWITHQUALIFICATIONTYPEREQUEST_P_H
#define QTAWS_LISTWORKERSWITHQUALIFICATIONTYPEREQUEST_P_H

#include "mturkrequest_p.h"
#include "listworkerswithqualificationtyperequest.h"

namespace QtAws {
namespace MTurk {

class ListWorkersWithQualificationTypeRequest;

class ListWorkersWithQualificationTypeRequestPrivate : public MTurkRequestPrivate {

public:
    ListWorkersWithQualificationTypeRequestPrivate(const MTurkRequest::Action action,
                                   ListWorkersWithQualificationTypeRequest * const q);
    ListWorkersWithQualificationTypeRequestPrivate(const ListWorkersWithQualificationTypeRequestPrivate &other,
                                   ListWorkersWithQualificationTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkersWithQualificationTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
