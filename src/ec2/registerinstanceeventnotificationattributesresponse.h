// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESRESPONSE_H
#define QTAWS_REGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESRESPONSE_H

#include "ec2response.h"
#include "registerinstanceeventnotificationattributesrequest.h"

namespace QtAws {
namespace Ec2 {

class RegisterInstanceEventNotificationAttributesResponsePrivate;

class QTAWSEC2_EXPORT RegisterInstanceEventNotificationAttributesResponse : public Ec2Response {
    Q_OBJECT

public:
    RegisterInstanceEventNotificationAttributesResponse(const RegisterInstanceEventNotificationAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterInstanceEventNotificationAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterInstanceEventNotificationAttributesResponse)
    Q_DISABLE_COPY(RegisterInstanceEventNotificationAttributesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
