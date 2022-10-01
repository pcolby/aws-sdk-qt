// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICERESPONSE_H
#define QTAWS_DESCRIBESERVICERESPONSE_H

#include "apprunnerresponse.h"
#include "describeservicerequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeServiceResponsePrivate;

class QTAWSAPPRUNNER_EXPORT DescribeServiceResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    DescribeServiceResponse(const DescribeServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServiceResponse)
    Q_DISABLE_COPY(DescribeServiceResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
