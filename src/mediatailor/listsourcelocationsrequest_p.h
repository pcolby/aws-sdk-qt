// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOURCELOCATIONSREQUEST_P_H
#define QTAWS_LISTSOURCELOCATIONSREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "listsourcelocationsrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListSourceLocationsRequest;

class ListSourceLocationsRequestPrivate : public MediaTailorRequestPrivate {

public:
    ListSourceLocationsRequestPrivate(const MediaTailorRequest::Action action,
                                   ListSourceLocationsRequest * const q);
    ListSourceLocationsRequestPrivate(const ListSourceLocationsRequestPrivate &other,
                                   ListSourceLocationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSourceLocationsRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
