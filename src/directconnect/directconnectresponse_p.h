// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DIRECTCONNECTRESPONSE_P_H
#define QTAWS_DIRECTCONNECTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DirectConnectResponse;

class DirectConnectResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DirectConnectResponsePrivate(DirectConnectResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DirectConnectResponse)
    Q_DISABLE_COPY(DirectConnectResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
