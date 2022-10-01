// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILESYSTEMASSOCIATIONSRESPONSE_H
#define QTAWS_LISTFILESYSTEMASSOCIATIONSRESPONSE_H

#include "storagegatewayresponse.h"
#include "listfilesystemassociationsrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListFileSystemAssociationsResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListFileSystemAssociationsResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    ListFileSystemAssociationsResponse(const ListFileSystemAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFileSystemAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFileSystemAssociationsResponse)
    Q_DISABLE_COPY(ListFileSystemAssociationsResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
