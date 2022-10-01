// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILESYSTEMASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTFILESYSTEMASSOCIATIONSRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class ListFileSystemAssociationsResponse;

class ListFileSystemAssociationsResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit ListFileSystemAssociationsResponsePrivate(ListFileSystemAssociationsResponse * const q);

    void parseListFileSystemAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFileSystemAssociationsResponse)
    Q_DISABLE_COPY(ListFileSystemAssociationsResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
