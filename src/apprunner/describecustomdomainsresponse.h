// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMDOMAINSRESPONSE_H
#define QTAWS_DESCRIBECUSTOMDOMAINSRESPONSE_H

#include "apprunnerresponse.h"
#include "describecustomdomainsrequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeCustomDomainsResponsePrivate;

class QTAWSAPPRUNNER_EXPORT DescribeCustomDomainsResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    DescribeCustomDomainsResponse(const DescribeCustomDomainsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCustomDomainsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomDomainsResponse)
    Q_DISABLE_COPY(DescribeCustomDomainsResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
