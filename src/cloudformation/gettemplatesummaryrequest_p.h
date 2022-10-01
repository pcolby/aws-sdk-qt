// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATESUMMARYREQUEST_P_H
#define QTAWS_GETTEMPLATESUMMARYREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "gettemplatesummaryrequest.h"

namespace QtAws {
namespace CloudFormation {

class GetTemplateSummaryRequest;

class GetTemplateSummaryRequestPrivate : public CloudFormationRequestPrivate {

public:
    GetTemplateSummaryRequestPrivate(const CloudFormationRequest::Action action,
                                   GetTemplateSummaryRequest * const q);
    GetTemplateSummaryRequestPrivate(const GetTemplateSummaryRequestPrivate &other,
                                   GetTemplateSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTemplateSummaryRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
