// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONSETTINGSREQUEST_H
#define QTAWS_UPDATEAPPLICATIONSETTINGSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApplicationSettingsRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateApplicationSettingsRequest : public PinpointRequest {

public:
    UpdateApplicationSettingsRequest(const UpdateApplicationSettingsRequest &other);
    UpdateApplicationSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationSettingsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
