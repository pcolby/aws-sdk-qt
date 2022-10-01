// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVITYTYPESREQUEST_P_H
#define QTAWS_LISTACTIVITYTYPESREQUEST_P_H

#include "swfrequest_p.h"
#include "listactivitytypesrequest.h"

namespace QtAws {
namespace Swf {

class ListActivityTypesRequest;

class ListActivityTypesRequestPrivate : public SwfRequestPrivate {

public:
    ListActivityTypesRequestPrivate(const SwfRequest::Action action,
                                   ListActivityTypesRequest * const q);
    ListActivityTypesRequestPrivate(const ListActivityTypesRequestPrivate &other,
                                   ListActivityTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListActivityTypesRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
