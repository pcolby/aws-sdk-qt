// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERSETTINGSREQUEST_H
#define QTAWS_UPDATECLUSTERSETTINGSREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateClusterSettingsRequestPrivate;

class QTAWSECS_EXPORT UpdateClusterSettingsRequest : public EcsRequest {

public:
    UpdateClusterSettingsRequest(const UpdateClusterSettingsRequest &other);
    UpdateClusterSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClusterSettingsRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
