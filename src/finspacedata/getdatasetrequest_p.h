// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETREQUEST_P_H
#define QTAWS_GETDATASETREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "getdatasetrequest.h"

namespace QtAws {
namespace FinspaceData {

class GetDatasetRequest;

class GetDatasetRequestPrivate : public FinspaceDataRequestPrivate {

public:
    GetDatasetRequestPrivate(const FinspaceDataRequest::Action action,
                                   GetDatasetRequest * const q);
    GetDatasetRequestPrivate(const GetDatasetRequestPrivate &other,
                                   GetDatasetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDatasetRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
