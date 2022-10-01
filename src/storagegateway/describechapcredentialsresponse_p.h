// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHAPCREDENTIALSRESPONSE_P_H
#define QTAWS_DESCRIBECHAPCREDENTIALSRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeChapCredentialsResponse;

class DescribeChapCredentialsResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeChapCredentialsResponsePrivate(DescribeChapCredentialsResponse * const q);

    void parseDescribeChapCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeChapCredentialsResponse)
    Q_DISABLE_COPY(DescribeChapCredentialsResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
