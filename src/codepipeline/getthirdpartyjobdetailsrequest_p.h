// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHIRDPARTYJOBDETAILSREQUEST_P_H
#define QTAWS_GETTHIRDPARTYJOBDETAILSREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "getthirdpartyjobdetailsrequest.h"

namespace QtAws {
namespace CodePipeline {

class GetThirdPartyJobDetailsRequest;

class GetThirdPartyJobDetailsRequestPrivate : public CodePipelineRequestPrivate {

public:
    GetThirdPartyJobDetailsRequestPrivate(const CodePipelineRequest::Action action,
                                   GetThirdPartyJobDetailsRequest * const q);
    GetThirdPartyJobDetailsRequestPrivate(const GetThirdPartyJobDetailsRequestPrivate &other,
                                   GetThirdPartyJobDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetThirdPartyJobDetailsRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
