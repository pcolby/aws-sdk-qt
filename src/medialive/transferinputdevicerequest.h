// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERINPUTDEVICEREQUEST_H
#define QTAWS_TRANSFERINPUTDEVICEREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class TransferInputDeviceRequestPrivate;

class QTAWSMEDIALIVE_EXPORT TransferInputDeviceRequest : public MediaLiveRequest {

public:
    TransferInputDeviceRequest(const TransferInputDeviceRequest &other);
    TransferInputDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TransferInputDeviceRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
