// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGSREQUEST_P_H
#define QTAWS_UPDATEFINDINGSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "updatefindingsrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateFindingsRequest;

class UpdateFindingsRequestPrivate : public SecurityHubRequestPrivate {

public:
    UpdateFindingsRequestPrivate(const SecurityHubRequest::Action action,
                                   UpdateFindingsRequest * const q);
    UpdateFindingsRequestPrivate(const UpdateFindingsRequestPrivate &other,
                                   UpdateFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFindingsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
