// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTHORIZERRESPONSE_P_H
#define QTAWS_CREATEAUTHORIZERRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateAuthorizerResponse;

class CreateAuthorizerResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateAuthorizerResponsePrivate(CreateAuthorizerResponse * const q);

    void parseCreateAuthorizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAuthorizerResponse)
    Q_DISABLE_COPY(CreateAuthorizerResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
