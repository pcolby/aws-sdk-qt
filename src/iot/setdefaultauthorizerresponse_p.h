// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTAUTHORIZERRESPONSE_P_H
#define QTAWS_SETDEFAULTAUTHORIZERRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class SetDefaultAuthorizerResponse;

class SetDefaultAuthorizerResponsePrivate : public IoTResponsePrivate {

public:

    explicit SetDefaultAuthorizerResponsePrivate(SetDefaultAuthorizerResponse * const q);

    void parseSetDefaultAuthorizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetDefaultAuthorizerResponse)
    Q_DISABLE_COPY(SetDefaultAuthorizerResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
