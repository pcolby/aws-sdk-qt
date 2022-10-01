// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYRESPONSE_P_H
#define QTAWS_UPDATESECURITYRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class UpdateSecurityResponse;

class UpdateSecurityResponsePrivate : public KafkaResponsePrivate {

public:

    explicit UpdateSecurityResponsePrivate(UpdateSecurityResponse * const q);

    void parseUpdateSecurityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSecurityResponse)
    Q_DISABLE_COPY(UpdateSecurityResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
