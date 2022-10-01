// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONDATERANGEKPIREQUEST_H
#define QTAWS_GETAPPLICATIONDATERANGEKPIREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApplicationDateRangeKpiRequestPrivate;

class QTAWSPINPOINT_EXPORT GetApplicationDateRangeKpiRequest : public PinpointRequest {

public:
    GetApplicationDateRangeKpiRequest(const GetApplicationDateRangeKpiRequest &other);
    GetApplicationDateRangeKpiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationDateRangeKpiRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
