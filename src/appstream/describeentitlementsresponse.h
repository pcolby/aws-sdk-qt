// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITLEMENTSRESPONSE_H
#define QTAWS_DESCRIBEENTITLEMENTSRESPONSE_H

#include "appstreamresponse.h"
#include "describeentitlementsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeEntitlementsResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DescribeEntitlementsResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DescribeEntitlementsResponse(const DescribeEntitlementsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEntitlementsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEntitlementsResponse)
    Q_DISABLE_COPY(DescribeEntitlementsResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
