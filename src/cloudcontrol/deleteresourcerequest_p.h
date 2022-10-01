// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEREQUEST_P_H
#define QTAWS_DELETERESOURCEREQUEST_P_H

#include "cloudcontrolrequest_p.h"
#include "deleteresourcerequest.h"

namespace QtAws {
namespace CloudControl {

class DeleteResourceRequest;

class DeleteResourceRequestPrivate : public CloudControlRequestPrivate {

public:
    DeleteResourceRequestPrivate(const CloudControlRequest::Action action,
                                   DeleteResourceRequest * const q);
    DeleteResourceRequestPrivate(const DeleteResourceRequestPrivate &other,
                                   DeleteResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResourceRequest)

};

} // namespace CloudControl
} // namespace QtAws

#endif
