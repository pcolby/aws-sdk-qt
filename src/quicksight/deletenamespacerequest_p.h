// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENAMESPACEREQUEST_P_H
#define QTAWS_DELETENAMESPACEREQUEST_P_H

#include "quicksightrequest_p.h"
#include "deletenamespacerequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteNamespaceRequest;

class DeleteNamespaceRequestPrivate : public QuickSightRequestPrivate {

public:
    DeleteNamespaceRequestPrivate(const QuickSightRequest::Action action,
                                   DeleteNamespaceRequest * const q);
    DeleteNamespaceRequestPrivate(const DeleteNamespaceRequestPrivate &other,
                                   DeleteNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNamespaceRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
