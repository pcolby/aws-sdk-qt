// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERREQUEST_H
#define QTAWS_UPDATECLUSTERREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateClusterRequestPrivate;

class QTAWSECS_EXPORT UpdateClusterRequest : public EcsRequest {

public:
    UpdateClusterRequest(const UpdateClusterRequest &other);
    UpdateClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClusterRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
