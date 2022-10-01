// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETLABELSREQUEST_P_H
#define QTAWS_LISTDATASETLABELSREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "listdatasetlabelsrequest.h"

namespace QtAws {
namespace Rekognition {

class ListDatasetLabelsRequest;

class ListDatasetLabelsRequestPrivate : public RekognitionRequestPrivate {

public:
    ListDatasetLabelsRequestPrivate(const RekognitionRequest::Action action,
                                   ListDatasetLabelsRequest * const q);
    ListDatasetLabelsRequestPrivate(const ListDatasetLabelsRequestPrivate &other,
                                   ListDatasetLabelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatasetLabelsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
