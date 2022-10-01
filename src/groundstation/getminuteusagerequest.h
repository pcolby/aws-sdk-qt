// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMINUTEUSAGEREQUEST_H
#define QTAWS_GETMINUTEUSAGEREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class GetMinuteUsageRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT GetMinuteUsageRequest : public GroundStationRequest {

public:
    GetMinuteUsageRequest(const GetMinuteUsageRequest &other);
    GetMinuteUsageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMinuteUsageRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
