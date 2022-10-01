// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSIGHTREQUEST_P_H
#define QTAWS_CREATEINSIGHTREQUEST_P_H

#include "securityhubrequest_p.h"
#include "createinsightrequest.h"

namespace QtAws {
namespace SecurityHub {

class CreateInsightRequest;

class CreateInsightRequestPrivate : public SecurityHubRequestPrivate {

public:
    CreateInsightRequestPrivate(const SecurityHubRequest::Action action,
                                   CreateInsightRequest * const q);
    CreateInsightRequestPrivate(const CreateInsightRequestPrivate &other,
                                   CreateInsightRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInsightRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
