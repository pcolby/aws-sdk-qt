// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUALIFICATIONTYPESREQUEST_P_H
#define QTAWS_LISTQUALIFICATIONTYPESREQUEST_P_H

#include "mturkrequest_p.h"
#include "listqualificationtypesrequest.h"

namespace QtAws {
namespace MTurk {

class ListQualificationTypesRequest;

class ListQualificationTypesRequestPrivate : public MTurkRequestPrivate {

public:
    ListQualificationTypesRequestPrivate(const MTurkRequest::Action action,
                                   ListQualificationTypesRequest * const q);
    ListQualificationTypesRequestPrivate(const ListQualificationTypesRequestPrivate &other,
                                   ListQualificationTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListQualificationTypesRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
