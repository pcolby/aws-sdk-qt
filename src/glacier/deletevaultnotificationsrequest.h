// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVAULTNOTIFICATIONSREQUEST_H
#define QTAWS_DELETEVAULTNOTIFICATIONSREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class DeleteVaultNotificationsRequestPrivate;

class QTAWSGLACIER_EXPORT DeleteVaultNotificationsRequest : public GlacierRequest {

public:
    DeleteVaultNotificationsRequest(const DeleteVaultNotificationsRequest &other);
    DeleteVaultNotificationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVaultNotificationsRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
