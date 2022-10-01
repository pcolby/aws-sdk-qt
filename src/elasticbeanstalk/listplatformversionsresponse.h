// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLATFORMVERSIONSRESPONSE_H
#define QTAWS_LISTPLATFORMVERSIONSRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "listplatformversionsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ListPlatformVersionsResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT ListPlatformVersionsResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    ListPlatformVersionsResponse(const ListPlatformVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPlatformVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPlatformVersionsResponse)
    Q_DISABLE_COPY(ListPlatformVersionsResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
