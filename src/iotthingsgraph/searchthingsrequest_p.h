// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTHINGSREQUEST_P_H
#define QTAWS_SEARCHTHINGSREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "searchthingsrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchThingsRequest;

class SearchThingsRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    SearchThingsRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   SearchThingsRequest * const q);
    SearchThingsRequestPrivate(const SearchThingsRequestPrivate &other,
                                   SearchThingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchThingsRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
