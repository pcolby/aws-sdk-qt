// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELMETADATAREQUEST_P_H
#define QTAWS_LISTMODELMETADATAREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listmodelmetadatarequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelMetadataRequest;

class ListModelMetadataRequestPrivate : public SageMakerRequestPrivate {

public:
    ListModelMetadataRequestPrivate(const SageMakerRequest::Action action,
                                   ListModelMetadataRequest * const q);
    ListModelMetadataRequestPrivate(const ListModelMetadataRequestPrivate &other,
                                   ListModelMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListModelMetadataRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
