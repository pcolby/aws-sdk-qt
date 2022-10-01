// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIONEXECUTIONSREQUEST_P_H
#define QTAWS_LISTACTIONEXECUTIONSREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "listactionexecutionsrequest.h"

namespace QtAws {
namespace CodePipeline {

class ListActionExecutionsRequest;

class ListActionExecutionsRequestPrivate : public CodePipelineRequestPrivate {

public:
    ListActionExecutionsRequestPrivate(const CodePipelineRequest::Action action,
                                   ListActionExecutionsRequest * const q);
    ListActionExecutionsRequestPrivate(const ListActionExecutionsRequestPrivate &other,
                                   ListActionExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListActionExecutionsRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
