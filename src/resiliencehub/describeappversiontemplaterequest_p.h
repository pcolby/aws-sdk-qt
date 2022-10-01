// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPVERSIONTEMPLATEREQUEST_P_H
#define QTAWS_DESCRIBEAPPVERSIONTEMPLATEREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "describeappversiontemplaterequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppVersionTemplateRequest;

class DescribeAppVersionTemplateRequestPrivate : public ResilienceHubRequestPrivate {

public:
    DescribeAppVersionTemplateRequestPrivate(const ResilienceHubRequest::Action action,
                                   DescribeAppVersionTemplateRequest * const q);
    DescribeAppVersionTemplateRequestPrivate(const DescribeAppVersionTemplateRequestPrivate &other,
                                   DescribeAppVersionTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAppVersionTemplateRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
