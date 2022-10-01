// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERUNTIMECONFIGURATIONREQUEST_H
#define QTAWS_UPDATERUNTIMECONFIGURATIONREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateRuntimeConfigurationRequestPrivate;

class QTAWSGAMELIFT_EXPORT UpdateRuntimeConfigurationRequest : public GameLiftRequest {

public:
    UpdateRuntimeConfigurationRequest(const UpdateRuntimeConfigurationRequest &other);
    UpdateRuntimeConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRuntimeConfigurationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
