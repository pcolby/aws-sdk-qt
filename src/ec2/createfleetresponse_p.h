// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETRESPONSE_P_H
#define QTAWS_CREATEFLEETRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateFleetResponse;

class CreateFleetResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateFleetResponsePrivate(CreateFleetResponse * const q);

    void parseCreateFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFleetResponse)
    Q_DISABLE_COPY(CreateFleetResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
