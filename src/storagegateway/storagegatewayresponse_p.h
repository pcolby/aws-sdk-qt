// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STORAGEGATEWAYRESPONSE_P_H
#define QTAWS_STORAGEGATEWAYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class StorageGatewayResponse;

class StorageGatewayResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit StorageGatewayResponsePrivate(StorageGatewayResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StorageGatewayResponse)
    Q_DISABLE_COPY(StorageGatewayResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
