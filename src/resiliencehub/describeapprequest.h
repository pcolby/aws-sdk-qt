// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPREQUEST_H
#define QTAWS_DESCRIBEAPPREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT DescribeAppRequest : public ResilienceHubRequest {

public:
    DescribeAppRequest(const DescribeAppRequest &other);
    DescribeAppRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
