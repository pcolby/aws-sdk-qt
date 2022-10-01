// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPLIANCEBYRESOURCERESPONSE_H
#define QTAWS_DESCRIBECOMPLIANCEBYRESOURCERESPONSE_H

#include "configserviceresponse.h"
#include "describecompliancebyresourcerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeComplianceByResourceResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeComplianceByResourceResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeComplianceByResourceResponse(const DescribeComplianceByResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeComplianceByResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeComplianceByResourceResponse)
    Q_DISABLE_COPY(DescribeComplianceByResourceResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
