// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETAGSFORRESOURCERESPONSE_H
#define QTAWS_UPDATETAGSFORRESOURCERESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "updatetagsforresourcerequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateTagsForResourceResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT UpdateTagsForResourceResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    UpdateTagsForResourceResponse(const UpdateTagsForResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTagsForResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTagsForResourceResponse)
    Q_DISABLE_COPY(UpdateTagsForResourceResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
