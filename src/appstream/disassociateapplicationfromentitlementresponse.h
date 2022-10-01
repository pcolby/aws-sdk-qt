// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPLICATIONFROMENTITLEMENTRESPONSE_H
#define QTAWS_DISASSOCIATEAPPLICATIONFROMENTITLEMENTRESPONSE_H

#include "appstreamresponse.h"
#include "disassociateapplicationfromentitlementrequest.h"

namespace QtAws {
namespace AppStream {

class DisassociateApplicationFromEntitlementResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DisassociateApplicationFromEntitlementResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DisassociateApplicationFromEntitlementResponse(const DisassociateApplicationFromEntitlementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateApplicationFromEntitlementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateApplicationFromEntitlementResponse)
    Q_DISABLE_COPY(DisassociateApplicationFromEntitlementResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
