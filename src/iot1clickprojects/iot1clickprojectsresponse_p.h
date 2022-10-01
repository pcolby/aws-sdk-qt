// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOT1CLICKPROJECTSRESPONSE_P_H
#define QTAWS_IOT1CLICKPROJECTSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

class IoT1ClickProjectsResponse;

class IoT1ClickProjectsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IoT1ClickProjectsResponsePrivate(IoT1ClickProjectsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IoT1ClickProjectsResponse)
    Q_DISABLE_COPY(IoT1ClickProjectsResponsePrivate)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
