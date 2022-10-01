// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGENTSRESPONSE_H
#define QTAWS_DESCRIBEAGENTSRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "describeagentsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeAgentsResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DescribeAgentsResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    DescribeAgentsResponse(const DescribeAgentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAgentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAgentsResponse)
    Q_DISABLE_COPY(DescribeAgentsResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
