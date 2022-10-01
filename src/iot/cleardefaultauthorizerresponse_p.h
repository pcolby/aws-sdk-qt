// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLEARDEFAULTAUTHORIZERRESPONSE_P_H
#define QTAWS_CLEARDEFAULTAUTHORIZERRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ClearDefaultAuthorizerResponse;

class ClearDefaultAuthorizerResponsePrivate : public IoTResponsePrivate {

public:

    explicit ClearDefaultAuthorizerResponsePrivate(ClearDefaultAuthorizerResponse * const q);

    void parseClearDefaultAuthorizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ClearDefaultAuthorizerResponse)
    Q_DISABLE_COPY(ClearDefaultAuthorizerResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
