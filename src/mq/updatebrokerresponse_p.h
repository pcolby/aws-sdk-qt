// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERRESPONSE_P_H
#define QTAWS_UPDATEBROKERRESPONSE_P_H

#include "mqresponse_p.h"

namespace QtAws {
namespace Mq {

class UpdateBrokerResponse;

class UpdateBrokerResponsePrivate : public MqResponsePrivate {

public:

    explicit UpdateBrokerResponsePrivate(UpdateBrokerResponse * const q);

    void parseUpdateBrokerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBrokerResponse)
    Q_DISABLE_COPY(UpdateBrokerResponsePrivate)

};

} // namespace Mq
} // namespace QtAws

#endif
