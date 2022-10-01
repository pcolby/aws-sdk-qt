// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELIVERABILITYTESTREPORTREQUEST_H
#define QTAWS_GETDELIVERABILITYTESTREPORTREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDeliverabilityTestReportRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetDeliverabilityTestReportRequest : public PinpointEmailRequest {

public:
    GetDeliverabilityTestReportRequest(const GetDeliverabilityTestReportRequest &other);
    GetDeliverabilityTestReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeliverabilityTestReportRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
