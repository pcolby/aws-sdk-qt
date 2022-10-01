// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINPUTDEVICETRANSFERREQUEST_H
#define QTAWS_ACCEPTINPUTDEVICETRANSFERREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class AcceptInputDeviceTransferRequestPrivate;

class QTAWSMEDIALIVE_EXPORT AcceptInputDeviceTransferRequest : public MediaLiveRequest {

public:
    AcceptInputDeviceTransferRequest(const AcceptInputDeviceTransferRequest &other);
    AcceptInputDeviceTransferRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptInputDeviceTransferRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
