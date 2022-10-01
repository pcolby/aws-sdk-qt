// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINESREQUEST_P_H
#define QTAWS_LISTPIPELINESREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "listpipelinesrequest.h"

namespace QtAws {
namespace CodePipeline {

class ListPipelinesRequest;

class ListPipelinesRequestPrivate : public CodePipelineRequestPrivate {

public:
    ListPipelinesRequestPrivate(const CodePipelineRequest::Action action,
                                   ListPipelinesRequest * const q);
    ListPipelinesRequestPrivate(const ListPipelinesRequestPrivate &other,
                                   ListPipelinesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPipelinesRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
