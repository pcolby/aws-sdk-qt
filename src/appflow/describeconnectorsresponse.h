// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORSRESPONSE_H
#define QTAWS_DESCRIBECONNECTORSRESPONSE_H

#include "appflowresponse.h"
#include "describeconnectorsrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeConnectorsResponsePrivate;

class QTAWSAPPFLOW_EXPORT DescribeConnectorsResponse : public AppflowResponse {
    Q_OBJECT

public:
    DescribeConnectorsResponse(const DescribeConnectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConnectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectorsResponse)
    Q_DISABLE_COPY(DescribeConnectorsResponse)

};

} // namespace Appflow
} // namespace QtAws

#endif
