// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORENTITYRESPONSE_H
#define QTAWS_DESCRIBECONNECTORENTITYRESPONSE_H

#include "appflowresponse.h"
#include "describeconnectorentityrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeConnectorEntityResponsePrivate;

class QTAWSAPPFLOW_EXPORT DescribeConnectorEntityResponse : public AppflowResponse {
    Q_OBJECT

public:
    DescribeConnectorEntityResponse(const DescribeConnectorEntityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConnectorEntityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectorEntityResponse)
    Q_DISABLE_COPY(DescribeConnectorEntityResponse)

};

} // namespace Appflow
} // namespace QtAws

#endif
