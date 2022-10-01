// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETREQUEST_P_H
#define QTAWS_DELETEDATASETREQUEST_P_H

#include "lookoutvisionrequest_p.h"
#include "deletedatasetrequest.h"

namespace QtAws {
namespace LookoutVision {

class DeleteDatasetRequest;

class DeleteDatasetRequestPrivate : public LookoutVisionRequestPrivate {

public:
    DeleteDatasetRequestPrivate(const LookoutVisionRequest::Action action,
                                   DeleteDatasetRequest * const q);
    DeleteDatasetRequestPrivate(const DeleteDatasetRequestPrivate &other,
                                   DeleteDatasetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDatasetRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
