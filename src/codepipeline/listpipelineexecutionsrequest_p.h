// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINEEXECUTIONSREQUEST_P_H
#define QTAWS_LISTPIPELINEEXECUTIONSREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "listpipelineexecutionsrequest.h"

namespace QtAws {
namespace CodePipeline {

class ListPipelineExecutionsRequest;

class ListPipelineExecutionsRequestPrivate : public CodePipelineRequestPrivate {

public:
    ListPipelineExecutionsRequestPrivate(const CodePipelineRequest::Action action,
                                   ListPipelineExecutionsRequest * const q);
    ListPipelineExecutionsRequestPrivate(const ListPipelineExecutionsRequestPrivate &other,
                                   ListPipelineExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPipelineExecutionsRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
