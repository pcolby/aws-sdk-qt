// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEINTEGRATIONRESPONSE_H
#define QTAWS_DESCRIBESERVICEINTEGRATIONRESPONSE_H

#include "devopsgururesponse.h"
#include "describeserviceintegrationrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeServiceIntegrationResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeServiceIntegrationResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    DescribeServiceIntegrationResponse(const DescribeServiceIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeServiceIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServiceIntegrationResponse)
    Q_DISABLE_COPY(DescribeServiceIntegrationResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
