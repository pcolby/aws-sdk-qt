// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETARGETSWITHJOBRESPONSE_P_H
#define QTAWS_ASSOCIATETARGETSWITHJOBRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class AssociateTargetsWithJobResponse;

class AssociateTargetsWithJobResponsePrivate : public IoTResponsePrivate {

public:

    explicit AssociateTargetsWithJobResponsePrivate(AssociateTargetsWithJobResponse * const q);

    void parseAssociateTargetsWithJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateTargetsWithJobResponse)
    Q_DISABLE_COPY(AssociateTargetsWithJobResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
