// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELIVERABILITYTESTREPORTSREQUEST_H
#define QTAWS_LISTDELIVERABILITYTESTREPORTSREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class ListDeliverabilityTestReportsRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT ListDeliverabilityTestReportsRequest : public PinpointEmailRequest {

public:
    ListDeliverabilityTestReportsRequest(const ListDeliverabilityTestReportsRequest &other);
    ListDeliverabilityTestReportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeliverabilityTestReportsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
