// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFARGATEPROFILESREQUEST_P_H
#define QTAWS_LISTFARGATEPROFILESREQUEST_P_H

#include "eksrequest_p.h"
#include "listfargateprofilesrequest.h"

namespace QtAws {
namespace Eks {

class ListFargateProfilesRequest;

class ListFargateProfilesRequestPrivate : public EksRequestPrivate {

public:
    ListFargateProfilesRequestPrivate(const EksRequest::Action action,
                                   ListFargateProfilesRequest * const q);
    ListFargateProfilesRequestPrivate(const ListFargateProfilesRequestPrivate &other,
                                   ListFargateProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFargateProfilesRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
