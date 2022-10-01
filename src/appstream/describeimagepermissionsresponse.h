// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBEIMAGEPERMISSIONSRESPONSE_H

#include "appstreamresponse.h"
#include "describeimagepermissionsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeImagePermissionsResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DescribeImagePermissionsResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DescribeImagePermissionsResponse(const DescribeImagePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeImagePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImagePermissionsResponse)
    Q_DISABLE_COPY(DescribeImagePermissionsResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
