// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINEEXECUTIONSREQUEST_P_H
#define QTAWS_LISTPIPELINEEXECUTIONSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listpipelineexecutionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListPipelineExecutionsRequest;

class ListPipelineExecutionsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListPipelineExecutionsRequestPrivate(const SageMakerRequest::Action action,
                                   ListPipelineExecutionsRequest * const q);
    ListPipelineExecutionsRequestPrivate(const ListPipelineExecutionsRequestPrivate &other,
                                   ListPipelineExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPipelineExecutionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
