// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSIGHTREQUEST_P_H
#define QTAWS_DELETEINSIGHTREQUEST_P_H

#include "securityhubrequest_p.h"
#include "deleteinsightrequest.h"

namespace QtAws {
namespace SecurityHub {

class DeleteInsightRequest;

class DeleteInsightRequestPrivate : public SecurityHubRequestPrivate {

public:
    DeleteInsightRequestPrivate(const SecurityHubRequest::Action action,
                                   DeleteInsightRequest * const q);
    DeleteInsightRequestPrivate(const DeleteInsightRequestPrivate &other,
                                   DeleteInsightRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInsightRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
