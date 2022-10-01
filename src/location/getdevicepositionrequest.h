// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOSITIONREQUEST_H
#define QTAWS_GETDEVICEPOSITIONREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class GetDevicePositionRequestPrivate;

class QTAWSLOCATION_EXPORT GetDevicePositionRequest : public LocationRequest {

public:
    GetDevicePositionRequest(const GetDevicePositionRequest &other);
    GetDevicePositionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevicePositionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
