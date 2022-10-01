// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORPROFILESRESPONSE_H
#define QTAWS_DESCRIBECONNECTORPROFILESRESPONSE_H

#include "appflowresponse.h"
#include "describeconnectorprofilesrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeConnectorProfilesResponsePrivate;

class QTAWSAPPFLOW_EXPORT DescribeConnectorProfilesResponse : public AppflowResponse {
    Q_OBJECT

public:
    DescribeConnectorProfilesResponse(const DescribeConnectorProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConnectorProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectorProfilesResponse)
    Q_DISABLE_COPY(DescribeConnectorProfilesResponse)

};

} // namespace Appflow
} // namespace QtAws

#endif
