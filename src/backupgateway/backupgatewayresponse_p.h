// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKUPGATEWAYRESPONSE_P_H
#define QTAWS_BACKUPGATEWAYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace BackupGateway {

class BackupGatewayResponse;

class BackupGatewayResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit BackupGatewayResponsePrivate(BackupGatewayResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BackupGatewayResponse)
    Q_DISABLE_COPY(BackupGatewayResponsePrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
