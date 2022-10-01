// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELINPUTDEVICETRANSFERREQUEST_H
#define QTAWS_CANCELINPUTDEVICETRANSFERREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class CancelInputDeviceTransferRequestPrivate;

class QTAWSMEDIALIVE_EXPORT CancelInputDeviceTransferRequest : public MediaLiveRequest {

public:
    CancelInputDeviceTransferRequest(const CancelInputDeviceTransferRequest &other);
    CancelInputDeviceTransferRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelInputDeviceTransferRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
