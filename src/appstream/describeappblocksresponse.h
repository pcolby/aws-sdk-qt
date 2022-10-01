// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPBLOCKSRESPONSE_H
#define QTAWS_DESCRIBEAPPBLOCKSRESPONSE_H

#include "appstreamresponse.h"
#include "describeappblocksrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeAppBlocksResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DescribeAppBlocksResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DescribeAppBlocksResponse(const DescribeAppBlocksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAppBlocksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppBlocksResponse)
    Q_DISABLE_COPY(DescribeAppBlocksResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
