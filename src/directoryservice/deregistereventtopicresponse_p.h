// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTEREVENTTOPICRESPONSE_P_H
#define QTAWS_DEREGISTEREVENTTOPICRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DeregisterEventTopicResponse;

class DeregisterEventTopicResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DeregisterEventTopicResponsePrivate(DeregisterEventTopicResponse * const q);

    void parseDeregisterEventTopicResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterEventTopicResponse)
    Q_DISABLE_COPY(DeregisterEventTopicResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
