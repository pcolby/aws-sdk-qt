// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORLDTEMPLATESREQUEST_P_H
#define QTAWS_LISTWORLDTEMPLATESREQUEST_P_H

#include "robomakerrequest_p.h"
#include "listworldtemplatesrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListWorldTemplatesRequest;

class ListWorldTemplatesRequestPrivate : public RoboMakerRequestPrivate {

public:
    ListWorldTemplatesRequestPrivate(const RoboMakerRequest::Action action,
                                   ListWorldTemplatesRequest * const q);
    ListWorldTemplatesRequestPrivate(const ListWorldTemplatesRequestPrivate &other,
                                   ListWorldTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorldTemplatesRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
