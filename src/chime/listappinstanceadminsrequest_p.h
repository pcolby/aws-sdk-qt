// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEADMINSREQUEST_P_H
#define QTAWS_LISTAPPINSTANCEADMINSREQUEST_P_H

#include "chimerequest_p.h"
#include "listappinstanceadminsrequest.h"

namespace QtAws {
namespace Chime {

class ListAppInstanceAdminsRequest;

class ListAppInstanceAdminsRequestPrivate : public ChimeRequestPrivate {

public:
    ListAppInstanceAdminsRequestPrivate(const ChimeRequest::Action action,
                                   ListAppInstanceAdminsRequest * const q);
    ListAppInstanceAdminsRequestPrivate(const ListAppInstanceAdminsRequestPrivate &other,
                                   ListAppInstanceAdminsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppInstanceAdminsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
