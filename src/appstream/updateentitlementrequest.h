// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENTITLEMENTREQUEST_H
#define QTAWS_UPDATEENTITLEMENTREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class UpdateEntitlementRequestPrivate;

class QTAWSAPPSTREAM_EXPORT UpdateEntitlementRequest : public AppStreamRequest {

public:
    UpdateEntitlementRequest(const UpdateEntitlementRequest &other);
    UpdateEntitlementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEntitlementRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
