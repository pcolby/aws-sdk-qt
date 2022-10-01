// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESRESPONSE_H
#define QTAWS_DEREGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESRESPONSE_H

#include "ec2response.h"
#include "deregisterinstanceeventnotificationattributesrequest.h"

namespace QtAws {
namespace Ec2 {

class DeregisterInstanceEventNotificationAttributesResponsePrivate;

class QTAWSEC2_EXPORT DeregisterInstanceEventNotificationAttributesResponse : public Ec2Response {
    Q_OBJECT

public:
    DeregisterInstanceEventNotificationAttributesResponse(const DeregisterInstanceEventNotificationAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterInstanceEventNotificationAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterInstanceEventNotificationAttributesResponse)
    Q_DISABLE_COPY(DeregisterInstanceEventNotificationAttributesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
