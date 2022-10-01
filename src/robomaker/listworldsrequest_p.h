// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORLDSREQUEST_P_H
#define QTAWS_LISTWORLDSREQUEST_P_H

#include "robomakerrequest_p.h"
#include "listworldsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListWorldsRequest;

class ListWorldsRequestPrivate : public RoboMakerRequestPrivate {

public:
    ListWorldsRequestPrivate(const RoboMakerRequest::Action action,
                                   ListWorldsRequest * const q);
    ListWorldsRequestPrivate(const ListWorldsRequestPrivate &other,
                                   ListWorldsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorldsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
