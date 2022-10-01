// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILTERSREQUEST_P_H
#define QTAWS_LISTFILTERSREQUEST_P_H

#include "personalizerequest_p.h"
#include "listfiltersrequest.h"

namespace QtAws {
namespace Personalize {

class ListFiltersRequest;

class ListFiltersRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListFiltersRequestPrivate(const PersonalizeRequest::Action action,
                                   ListFiltersRequest * const q);
    ListFiltersRequestPrivate(const ListFiltersRequestPrivate &other,
                                   ListFiltersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFiltersRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
