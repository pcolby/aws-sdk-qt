// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONRESOURCELIFECYCLERESPONSE_H
#define QTAWS_UPDATEAPPLICATIONRESOURCELIFECYCLERESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "updateapplicationresourcelifecyclerequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateApplicationResourceLifecycleResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT UpdateApplicationResourceLifecycleResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    UpdateApplicationResourceLifecycleResponse(const UpdateApplicationResourceLifecycleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApplicationResourceLifecycleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationResourceLifecycleResponse)
    Q_DISABLE_COPY(UpdateApplicationResourceLifecycleResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
