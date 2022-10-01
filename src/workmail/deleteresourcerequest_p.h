// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEREQUEST_P_H
#define QTAWS_DELETERESOURCEREQUEST_P_H

#include "workmailrequest_p.h"
#include "deleteresourcerequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteResourceRequest;

class DeleteResourceRequestPrivate : public WorkMailRequestPrivate {

public:
    DeleteResourceRequestPrivate(const WorkMailRequest::Action action,
                                   DeleteResourceRequest * const q);
    DeleteResourceRequestPrivate(const DeleteResourceRequestPrivate &other,
                                   DeleteResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResourceRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
