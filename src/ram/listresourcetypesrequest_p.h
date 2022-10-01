// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCETYPESREQUEST_P_H
#define QTAWS_LISTRESOURCETYPESREQUEST_P_H

#include "ramrequest_p.h"
#include "listresourcetypesrequest.h"

namespace QtAws {
namespace Ram {

class ListResourceTypesRequest;

class ListResourceTypesRequestPrivate : public RamRequestPrivate {

public:
    ListResourceTypesRequestPrivate(const RamRequest::Action action,
                                   ListResourceTypesRequest * const q);
    ListResourceTypesRequestPrivate(const ListResourceTypesRequestPrivate &other,
                                   ListResourceTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourceTypesRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
