// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINPUTDEVICETRANSFERREQUEST_H
#define QTAWS_REJECTINPUTDEVICETRANSFERREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class RejectInputDeviceTransferRequestPrivate;

class QTAWSMEDIALIVE_EXPORT RejectInputDeviceTransferRequest : public MediaLiveRequest {

public:
    RejectInputDeviceTransferRequest(const RejectInputDeviceTransferRequest &other);
    RejectInputDeviceTransferRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectInputDeviceTransferRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
