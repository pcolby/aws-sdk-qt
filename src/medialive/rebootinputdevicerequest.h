// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTINPUTDEVICEREQUEST_H
#define QTAWS_REBOOTINPUTDEVICEREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class RebootInputDeviceRequestPrivate;

class QTAWSMEDIALIVE_EXPORT RebootInputDeviceRequest : public MediaLiveRequest {

public:
    RebootInputDeviceRequest(const RebootInputDeviceRequest &other);
    RebootInputDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootInputDeviceRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
