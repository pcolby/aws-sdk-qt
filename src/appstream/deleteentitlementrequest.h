// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITLEMENTREQUEST_H
#define QTAWS_DELETEENTITLEMENTREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteEntitlementRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DeleteEntitlementRequest : public AppStreamRequest {

public:
    DeleteEntitlementRequest(const DeleteEntitlementRequest &other);
    DeleteEntitlementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEntitlementRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
