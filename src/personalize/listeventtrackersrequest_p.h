// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTTRACKERSREQUEST_P_H
#define QTAWS_LISTEVENTTRACKERSREQUEST_P_H

#include "personalizerequest_p.h"
#include "listeventtrackersrequest.h"

namespace QtAws {
namespace Personalize {

class ListEventTrackersRequest;

class ListEventTrackersRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListEventTrackersRequestPrivate(const PersonalizeRequest::Action action,
                                   ListEventTrackersRequest * const q);
    ListEventTrackersRequestPrivate(const ListEventTrackersRequestPrivate &other,
                                   ListEventTrackersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventTrackersRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
