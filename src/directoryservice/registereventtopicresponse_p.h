// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTEREVENTTOPICRESPONSE_P_H
#define QTAWS_REGISTEREVENTTOPICRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class RegisterEventTopicResponse;

class RegisterEventTopicResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit RegisterEventTopicResponsePrivate(RegisterEventTopicResponse * const q);

    void parseRegisterEventTopicResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterEventTopicResponse)
    Q_DISABLE_COPY(RegisterEventTopicResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
