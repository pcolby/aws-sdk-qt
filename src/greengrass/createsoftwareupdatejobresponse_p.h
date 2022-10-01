// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOFTWAREUPDATEJOBRESPONSE_P_H
#define QTAWS_CREATESOFTWAREUPDATEJOBRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateSoftwareUpdateJobResponse;

class CreateSoftwareUpdateJobResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateSoftwareUpdateJobResponsePrivate(CreateSoftwareUpdateJobResponse * const q);

    void parseCreateSoftwareUpdateJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSoftwareUpdateJobResponse)
    Q_DISABLE_COPY(CreateSoftwareUpdateJobResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
