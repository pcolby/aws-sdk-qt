// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTBROKERRESPONSE_P_H
#define QTAWS_REBOOTBROKERRESPONSE_P_H

#include "mqresponse_p.h"

namespace QtAws {
namespace Mq {

class RebootBrokerResponse;

class RebootBrokerResponsePrivate : public MqResponsePrivate {

public:

    explicit RebootBrokerResponsePrivate(RebootBrokerResponse * const q);

    void parseRebootBrokerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebootBrokerResponse)
    Q_DISABLE_COPY(RebootBrokerResponsePrivate)

};

} // namespace Mq
} // namespace QtAws

#endif
