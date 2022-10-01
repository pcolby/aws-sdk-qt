// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBDETAILSREQUEST_P_H
#define QTAWS_GETJOBDETAILSREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "getjobdetailsrequest.h"

namespace QtAws {
namespace CodePipeline {

class GetJobDetailsRequest;

class GetJobDetailsRequestPrivate : public CodePipelineRequestPrivate {

public:
    GetJobDetailsRequestPrivate(const CodePipelineRequest::Action action,
                                   GetJobDetailsRequest * const q);
    GetJobDetailsRequestPrivate(const GetJobDetailsRequestPrivate &other,
                                   GetJobDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobDetailsRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
