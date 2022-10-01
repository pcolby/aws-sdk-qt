// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEADMINSREQUEST_P_H
#define QTAWS_LISTAPPINSTANCEADMINSREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "listappinstanceadminsrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ListAppInstanceAdminsRequest;

class ListAppInstanceAdminsRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    ListAppInstanceAdminsRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   ListAppInstanceAdminsRequest * const q);
    ListAppInstanceAdminsRequestPrivate(const ListAppInstanceAdminsRequestPrivate &other,
                                   ListAppInstanceAdminsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppInstanceAdminsRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
