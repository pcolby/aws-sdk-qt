// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERRESPONSE_P_H
#define QTAWS_DELETECLUSTERRESPONSE_P_H

#include "kafkaresponse_p.h"

namespace QtAws {
namespace Kafka {

class DeleteClusterResponse;

class DeleteClusterResponsePrivate : public KafkaResponsePrivate {

public:

    explicit DeleteClusterResponsePrivate(DeleteClusterResponse * const q);

    void parseDeleteClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteClusterResponse)
    Q_DISABLE_COPY(DeleteClusterResponsePrivate)

};

} // namespace Kafka
} // namespace QtAws

#endif
