// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSIGHTREQUEST_P_H
#define QTAWS_UPDATEINSIGHTREQUEST_P_H

#include "securityhubrequest_p.h"
#include "updateinsightrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateInsightRequest;

class UpdateInsightRequestPrivate : public SecurityHubRequestPrivate {

public:
    UpdateInsightRequestPrivate(const SecurityHubRequest::Action action,
                                   UpdateInsightRequest * const q);
    UpdateInsightRequestPrivate(const UpdateInsightRequestPrivate &other,
                                   UpdateInsightRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateInsightRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
