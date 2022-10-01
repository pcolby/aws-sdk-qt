// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPVERSIONRESOURCESRESOLUTIONSTATUSRESPONSE_H
#define QTAWS_DESCRIBEAPPVERSIONRESOURCESRESOLUTIONSTATUSRESPONSE_H

#include "resiliencehubresponse.h"
#include "describeappversionresourcesresolutionstatusrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppVersionResourcesResolutionStatusResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT DescribeAppVersionResourcesResolutionStatusResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    DescribeAppVersionResourcesResolutionStatusResponse(const DescribeAppVersionResourcesResolutionStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAppVersionResourcesResolutionStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppVersionResourcesResolutionStatusResponse)
    Q_DISABLE_COPY(DescribeAppVersionResourcesResolutionStatusResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
