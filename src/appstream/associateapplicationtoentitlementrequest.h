// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPLICATIONTOENTITLEMENTREQUEST_H
#define QTAWS_ASSOCIATEAPPLICATIONTOENTITLEMENTREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class AssociateApplicationToEntitlementRequestPrivate;

class QTAWSAPPSTREAM_EXPORT AssociateApplicationToEntitlementRequest : public AppStreamRequest {

public:
    AssociateApplicationToEntitlementRequest(const AssociateApplicationToEntitlementRequest &other);
    AssociateApplicationToEntitlementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateApplicationToEntitlementRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
