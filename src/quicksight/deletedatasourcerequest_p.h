// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASOURCEREQUEST_P_H
#define QTAWS_DELETEDATASOURCEREQUEST_P_H

#include "quicksightrequest_p.h"
#include "deletedatasourcerequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteDataSourceRequest;

class DeleteDataSourceRequestPrivate : public QuickSightRequestPrivate {

public:
    DeleteDataSourceRequestPrivate(const QuickSightRequest::Action action,
                                   DeleteDataSourceRequest * const q);
    DeleteDataSourceRequestPrivate(const DeleteDataSourceRequestPrivate &other,
                                   DeleteDataSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDataSourceRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
