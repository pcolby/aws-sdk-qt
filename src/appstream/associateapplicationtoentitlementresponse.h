// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPLICATIONTOENTITLEMENTRESPONSE_H
#define QTAWS_ASSOCIATEAPPLICATIONTOENTITLEMENTRESPONSE_H

#include "appstreamresponse.h"
#include "associateapplicationtoentitlementrequest.h"

namespace QtAws {
namespace AppStream {

class AssociateApplicationToEntitlementResponsePrivate;

class QTAWSAPPSTREAM_EXPORT AssociateApplicationToEntitlementResponse : public AppStreamResponse {
    Q_OBJECT

public:
    AssociateApplicationToEntitlementResponse(const AssociateApplicationToEntitlementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateApplicationToEntitlementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateApplicationToEntitlementResponse)
    Q_DISABLE_COPY(AssociateApplicationToEntitlementResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
