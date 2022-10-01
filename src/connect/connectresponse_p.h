// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTRESPONSE_P_H
#define QTAWS_CONNECTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Connect {

class ConnectResponse;

class ConnectResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ConnectResponsePrivate(ConnectResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConnectResponse)
    Q_DISABLE_COPY(ConnectResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
