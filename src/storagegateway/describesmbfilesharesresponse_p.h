// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESMBFILESHARESRESPONSE_P_H
#define QTAWS_DESCRIBESMBFILESHARESRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeSMBFileSharesResponse;

class DescribeSMBFileSharesResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeSMBFileSharesResponsePrivate(DescribeSMBFileSharesResponse * const q);

    void parseDescribeSMBFileSharesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSMBFileSharesResponse)
    Q_DISABLE_COPY(DescribeSMBFileSharesResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
