// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETREQUEST_P_H
#define QTAWS_CREATEDATASETREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "createdatasetrequest.h"

namespace QtAws {
namespace FinspaceData {

class CreateDatasetRequest;

class CreateDatasetRequestPrivate : public FinspaceDataRequestPrivate {

public:
    CreateDatasetRequestPrivate(const FinspaceDataRequest::Action action,
                                   CreateDatasetRequest * const q);
    CreateDatasetRequestPrivate(const CreateDatasetRequestPrivate &other,
                                   CreateDatasetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDatasetRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
