// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONVERSIONSREQUEST_P_H
#define QTAWS_LISTAPPLICATIONVERSIONSREQUEST_P_H

#include "m2request_p.h"
#include "listapplicationversionsrequest.h"

namespace QtAws {
namespace M2 {

class ListApplicationVersionsRequest;

class ListApplicationVersionsRequestPrivate : public M2RequestPrivate {

public:
    ListApplicationVersionsRequestPrivate(const M2Request::Action action,
                                   ListApplicationVersionsRequest * const q);
    ListApplicationVersionsRequestPrivate(const ListApplicationVersionsRequestPrivate &other,
                                   ListApplicationVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationVersionsRequest)

};

} // namespace M2
} // namespace QtAws

#endif
