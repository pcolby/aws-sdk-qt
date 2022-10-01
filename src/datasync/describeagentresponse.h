// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGENTRESPONSE_H
#define QTAWS_DESCRIBEAGENTRESPONSE_H

#include "datasyncresponse.h"
#include "describeagentrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeAgentResponsePrivate;

class QTAWSDATASYNC_EXPORT DescribeAgentResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DescribeAgentResponse(const DescribeAgentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAgentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAgentResponse)
    Q_DISABLE_COPY(DescribeAgentResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
