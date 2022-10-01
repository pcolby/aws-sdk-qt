// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILESYSTEMASSOCIATIONSREQUEST_H
#define QTAWS_LISTFILESYSTEMASSOCIATIONSREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListFileSystemAssociationsRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListFileSystemAssociationsRequest : public StorageGatewayRequest {

public:
    ListFileSystemAssociationsRequest(const ListFileSystemAssociationsRequest &other);
    ListFileSystemAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFileSystemAssociationsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
