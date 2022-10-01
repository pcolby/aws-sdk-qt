// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSIGHTREQUEST_P_H
#define QTAWS_DELETEINSIGHTREQUEST_P_H

#include "devopsgururequest_p.h"
#include "deleteinsightrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DeleteInsightRequest;

class DeleteInsightRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    DeleteInsightRequestPrivate(const DevOpsGuruRequest::Action action,
                                   DeleteInsightRequest * const q);
    DeleteInsightRequestPrivate(const DeleteInsightRequestPrivate &other,
                                   DeleteInsightRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInsightRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
