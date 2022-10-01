// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENTITLEMENTREQUEST_H
#define QTAWS_CREATEENTITLEMENTREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class CreateEntitlementRequestPrivate;

class QTAWSAPPSTREAM_EXPORT CreateEntitlementRequest : public AppStreamRequest {

public:
    CreateEntitlementRequest(const CreateEntitlementRequest &other);
    CreateEntitlementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEntitlementRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
