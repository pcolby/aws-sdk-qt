// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIENCESREQUEST_P_H
#define QTAWS_LISTEXPERIENCESREQUEST_P_H

#include "kendrarequest_p.h"
#include "listexperiencesrequest.h"

namespace QtAws {
namespace Kendra {

class ListExperiencesRequest;

class ListExperiencesRequestPrivate : public KendraRequestPrivate {

public:
    ListExperiencesRequestPrivate(const KendraRequest::Action action,
                                   ListExperiencesRequest * const q);
    ListExperiencesRequestPrivate(const ListExperiencesRequestPrivate &other,
                                   ListExperiencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExperiencesRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
