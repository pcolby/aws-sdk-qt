// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOSITIONHISTORYREQUEST_H
#define QTAWS_GETDEVICEPOSITIONHISTORYREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class GetDevicePositionHistoryRequestPrivate;

class QTAWSLOCATION_EXPORT GetDevicePositionHistoryRequest : public LocationRequest {

public:
    GetDevicePositionHistoryRequest(const GetDevicePositionHistoryRequest &other);
    GetDevicePositionHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevicePositionHistoryRequest)

};

} // namespace Location
} // namespace QtAws

#endif
