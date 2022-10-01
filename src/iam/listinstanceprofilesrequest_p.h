// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEPROFILESREQUEST_P_H
#define QTAWS_LISTINSTANCEPROFILESREQUEST_P_H

#include "iamrequest_p.h"
#include "listinstanceprofilesrequest.h"

namespace QtAws {
namespace Iam {

class ListInstanceProfilesRequest;

class ListInstanceProfilesRequestPrivate : public IamRequestPrivate {

public:
    ListInstanceProfilesRequestPrivate(const IamRequest::Action action,
                                   ListInstanceProfilesRequest * const q);
    ListInstanceProfilesRequestPrivate(const ListInstanceProfilesRequestPrivate &other,
                                   ListInstanceProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInstanceProfilesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
