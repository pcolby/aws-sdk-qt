// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETENTRIESREQUEST_P_H
#define QTAWS_LISTDATASETENTRIESREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "listdatasetentriesrequest.h"

namespace QtAws {
namespace Rekognition {

class ListDatasetEntriesRequest;

class ListDatasetEntriesRequestPrivate : public RekognitionRequestPrivate {

public:
    ListDatasetEntriesRequestPrivate(const RekognitionRequest::Action action,
                                   ListDatasetEntriesRequest * const q);
    ListDatasetEntriesRequestPrivate(const ListDatasetEntriesRequestPrivate &other,
                                   ListDatasetEntriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatasetEntriesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
