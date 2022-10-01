// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEBUILDERSRESPONSE_H
#define QTAWS_DESCRIBEIMAGEBUILDERSRESPONSE_H

#include "appstreamresponse.h"
#include "describeimagebuildersrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeImageBuildersResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DescribeImageBuildersResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DescribeImageBuildersResponse(const DescribeImageBuildersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeImageBuildersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageBuildersResponse)
    Q_DISABLE_COPY(DescribeImageBuildersResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
