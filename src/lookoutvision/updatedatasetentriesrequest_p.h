// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETENTRIESREQUEST_P_H
#define QTAWS_UPDATEDATASETENTRIESREQUEST_P_H

#include "lookoutvisionrequest_p.h"
#include "updatedatasetentriesrequest.h"

namespace QtAws {
namespace LookoutVision {

class UpdateDatasetEntriesRequest;

class UpdateDatasetEntriesRequestPrivate : public LookoutVisionRequestPrivate {

public:
    UpdateDatasetEntriesRequestPrivate(const LookoutVisionRequest::Action action,
                                   UpdateDatasetEntriesRequest * const q);
    UpdateDatasetEntriesRequestPrivate(const UpdateDatasetEntriesRequestPrivate &other,
                                   UpdateDatasetEntriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDatasetEntriesRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
