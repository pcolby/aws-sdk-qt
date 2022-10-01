// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONSETTINGSREQUEST_H
#define QTAWS_GETAPPLICATIONSETTINGSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApplicationSettingsRequestPrivate;

class QTAWSPINPOINT_EXPORT GetApplicationSettingsRequest : public PinpointRequest {

public:
    GetApplicationSettingsRequest(const GetApplicationSettingsRequest &other);
    GetApplicationSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationSettingsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
