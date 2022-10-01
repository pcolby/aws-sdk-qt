// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERSTACKASSOCIATIONSRESPONSE_H
#define QTAWS_DESCRIBEUSERSTACKASSOCIATIONSRESPONSE_H

#include "appstreamresponse.h"
#include "describeuserstackassociationsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeUserStackAssociationsResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DescribeUserStackAssociationsResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DescribeUserStackAssociationsResponse(const DescribeUserStackAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUserStackAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserStackAssociationsResponse)
    Q_DISABLE_COPY(DescribeUserStackAssociationsResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
