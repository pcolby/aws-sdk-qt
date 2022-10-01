// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINPUTDEVICEREQUEST_H
#define QTAWS_UPDATEINPUTDEVICEREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateInputDeviceRequestPrivate;

class QTAWSMEDIALIVE_EXPORT UpdateInputDeviceRequest : public MediaLiveRequest {

public:
    UpdateInputDeviceRequest(const UpdateInputDeviceRequest &other);
    UpdateInputDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInputDeviceRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
