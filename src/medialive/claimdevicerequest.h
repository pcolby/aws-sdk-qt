// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMDEVICEREQUEST_H
#define QTAWS_CLAIMDEVICEREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class ClaimDeviceRequestPrivate;

class QTAWSMEDIALIVE_EXPORT ClaimDeviceRequest : public MediaLiveRequest {

public:
    ClaimDeviceRequest(const ClaimDeviceRequest &other);
    ClaimDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ClaimDeviceRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
