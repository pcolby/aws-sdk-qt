// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETAGSFORRESOURCEREQUEST_H
#define QTAWS_UPDATETAGSFORRESOURCEREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateTagsForResourceRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT UpdateTagsForResourceRequest : public ElasticBeanstalkRequest {

public:
    UpdateTagsForResourceRequest(const UpdateTagsForResourceRequest &other);
    UpdateTagsForResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTagsForResourceRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
