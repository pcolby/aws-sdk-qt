// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATECONFIGURATIONRESPONSE_P_H

#include "mqresponse_p.h"

namespace QtAws {
namespace Mq {

class CreateConfigurationResponse;

class CreateConfigurationResponsePrivate : public MqResponsePrivate {

public:

    explicit CreateConfigurationResponsePrivate(CreateConfigurationResponse * const q);

    void parseCreateConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationResponse)
    Q_DISABLE_COPY(CreateConfigurationResponsePrivate)

};

} // namespace Mq
} // namespace QtAws

#endif
