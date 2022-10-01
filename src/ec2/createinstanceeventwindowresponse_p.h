// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEEVENTWINDOWRESPONSE_P_H
#define QTAWS_CREATEINSTANCEEVENTWINDOWRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateInstanceEventWindowResponse;

class CreateInstanceEventWindowResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateInstanceEventWindowResponsePrivate(CreateInstanceEventWindowResponse * const q);

    void parseCreateInstanceEventWindowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInstanceEventWindowResponse)
    Q_DISABLE_COPY(CreateInstanceEventWindowResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
