// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISTRIBUTEDATASETENTRIESREQUEST_P_H
#define QTAWS_DISTRIBUTEDATASETENTRIESREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "distributedatasetentriesrequest.h"

namespace QtAws {
namespace Rekognition {

class DistributeDatasetEntriesRequest;

class DistributeDatasetEntriesRequestPrivate : public RekognitionRequestPrivate {

public:
    DistributeDatasetEntriesRequestPrivate(const RekognitionRequest::Action action,
                                   DistributeDatasetEntriesRequest * const q);
    DistributeDatasetEntriesRequestPrivate(const DistributeDatasetEntriesRequestPrivate &other,
                                   DistributeDatasetEntriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DistributeDatasetEntriesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
