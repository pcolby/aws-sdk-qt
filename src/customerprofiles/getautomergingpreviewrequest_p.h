// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOMERGINGPREVIEWREQUEST_P_H
#define QTAWS_GETAUTOMERGINGPREVIEWREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "getautomergingpreviewrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetAutoMergingPreviewRequest;

class GetAutoMergingPreviewRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    GetAutoMergingPreviewRequestPrivate(const CustomerProfilesRequest::Action action,
                                   GetAutoMergingPreviewRequest * const q);
    GetAutoMergingPreviewRequestPrivate(const GetAutoMergingPreviewRequestPrivate &other,
                                   GetAutoMergingPreviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAutoMergingPreviewRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
