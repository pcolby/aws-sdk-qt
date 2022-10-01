// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPVERSIONTEMPLATEREQUEST_H
#define QTAWS_DESCRIBEAPPVERSIONTEMPLATEREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppVersionTemplateRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT DescribeAppVersionTemplateRequest : public ResilienceHubRequest {

public:
    DescribeAppVersionTemplateRequest(const DescribeAppVersionTemplateRequest &other);
    DescribeAppVersionTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppVersionTemplateRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
