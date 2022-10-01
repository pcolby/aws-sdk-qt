// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONRESOURCELIFECYCLEREQUEST_H
#define QTAWS_UPDATEAPPLICATIONRESOURCELIFECYCLEREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateApplicationResourceLifecycleRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT UpdateApplicationResourceLifecycleRequest : public ElasticBeanstalkRequest {

public:
    UpdateApplicationResourceLifecycleRequest(const UpdateApplicationResourceLifecycleRequest &other);
    UpdateApplicationResourceLifecycleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationResourceLifecycleRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
