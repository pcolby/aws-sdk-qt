// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTORYCONFIGSRESPONSE_H
#define QTAWS_DESCRIBEDIRECTORYCONFIGSRESPONSE_H

#include "appstreamresponse.h"
#include "describedirectoryconfigsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeDirectoryConfigsResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DescribeDirectoryConfigsResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DescribeDirectoryConfigsResponse(const DescribeDirectoryConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDirectoryConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDirectoryConfigsResponse)
    Q_DISABLE_COPY(DescribeDirectoryConfigsResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
