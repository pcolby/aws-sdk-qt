// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIPMEDIAAPPLICATIONSREQUEST_P_H
#define QTAWS_LISTSIPMEDIAAPPLICATIONSREQUEST_P_H

#include "chimerequest_p.h"
#include "listsipmediaapplicationsrequest.h"

namespace QtAws {
namespace Chime {

class ListSipMediaApplicationsRequest;

class ListSipMediaApplicationsRequestPrivate : public ChimeRequestPrivate {

public:
    ListSipMediaApplicationsRequestPrivate(const ChimeRequest::Action action,
                                   ListSipMediaApplicationsRequest * const q);
    ListSipMediaApplicationsRequestPrivate(const ListSipMediaApplicationsRequestPrivate &other,
                                   ListSipMediaApplicationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSipMediaApplicationsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
