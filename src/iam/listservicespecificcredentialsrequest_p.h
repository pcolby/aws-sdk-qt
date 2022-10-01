// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICESPECIFICCREDENTIALSREQUEST_P_H
#define QTAWS_LISTSERVICESPECIFICCREDENTIALSREQUEST_P_H

#include "iamrequest_p.h"
#include "listservicespecificcredentialsrequest.h"

namespace QtAws {
namespace Iam {

class ListServiceSpecificCredentialsRequest;

class ListServiceSpecificCredentialsRequestPrivate : public IamRequestPrivate {

public:
    ListServiceSpecificCredentialsRequestPrivate(const IamRequest::Action action,
                                   ListServiceSpecificCredentialsRequest * const q);
    ListServiceSpecificCredentialsRequestPrivate(const ListServiceSpecificCredentialsRequestPrivate &other,
                                   ListServiceSpecificCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServiceSpecificCredentialsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
