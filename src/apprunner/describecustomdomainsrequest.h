// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMDOMAINSREQUEST_H
#define QTAWS_DESCRIBECUSTOMDOMAINSREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeCustomDomainsRequestPrivate;

class QTAWSAPPRUNNER_EXPORT DescribeCustomDomainsRequest : public AppRunnerRequest {

public:
    DescribeCustomDomainsRequest(const DescribeCustomDomainsRequest &other);
    DescribeCustomDomainsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomDomainsRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
