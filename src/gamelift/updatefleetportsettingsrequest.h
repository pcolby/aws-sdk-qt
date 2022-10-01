// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETPORTSETTINGSREQUEST_H
#define QTAWS_UPDATEFLEETPORTSETTINGSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateFleetPortSettingsRequestPrivate;

class QTAWSGAMELIFT_EXPORT UpdateFleetPortSettingsRequest : public GameLiftRequest {

public:
    UpdateFleetPortSettingsRequest(const UpdateFleetPortSettingsRequest &other);
    UpdateFleetPortSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFleetPortSettingsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
