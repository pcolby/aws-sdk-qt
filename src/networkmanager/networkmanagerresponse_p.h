// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NETWORKMANAGERRESPONSE_P_H
#define QTAWS_NETWORKMANAGERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class NetworkManagerResponse;

class NetworkManagerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit NetworkManagerResponsePrivate(NetworkManagerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(NetworkManagerResponse)
    Q_DISABLE_COPY(NetworkManagerResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
