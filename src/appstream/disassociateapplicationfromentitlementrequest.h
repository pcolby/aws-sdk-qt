// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPLICATIONFROMENTITLEMENTREQUEST_H
#define QTAWS_DISASSOCIATEAPPLICATIONFROMENTITLEMENTREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DisassociateApplicationFromEntitlementRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DisassociateApplicationFromEntitlementRequest : public AppStreamRequest {

public:
    DisassociateApplicationFromEntitlementRequest(const DisassociateApplicationFromEntitlementRequest &other);
    DisassociateApplicationFromEntitlementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateApplicationFromEntitlementRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
