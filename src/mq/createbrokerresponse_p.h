// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBROKERRESPONSE_P_H
#define QTAWS_CREATEBROKERRESPONSE_P_H

#include "mqresponse_p.h"

namespace QtAws {
namespace Mq {

class CreateBrokerResponse;

class CreateBrokerResponsePrivate : public MqResponsePrivate {

public:

    explicit CreateBrokerResponsePrivate(CreateBrokerResponse * const q);

    void parseCreateBrokerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBrokerResponse)
    Q_DISABLE_COPY(CreateBrokerResponsePrivate)

};

} // namespace Mq
} // namespace QtAws

#endif
