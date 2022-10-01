// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBROKERRESPONSE_P_H
#define QTAWS_DELETEBROKERRESPONSE_P_H

#include "mqresponse_p.h"

namespace QtAws {
namespace Mq {

class DeleteBrokerResponse;

class DeleteBrokerResponsePrivate : public MqResponsePrivate {

public:

    explicit DeleteBrokerResponsePrivate(DeleteBrokerResponse * const q);

    void parseDeleteBrokerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBrokerResponse)
    Q_DISABLE_COPY(DeleteBrokerResponsePrivate)

};

} // namespace Mq
} // namespace QtAws

#endif
