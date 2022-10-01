// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEUEFIDATARESPONSE_P_H
#define QTAWS_GETINSTANCEUEFIDATARESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetInstanceUefiDataResponse;

class GetInstanceUefiDataResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetInstanceUefiDataResponsePrivate(GetInstanceUefiDataResponse * const q);

    void parseGetInstanceUefiDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInstanceUefiDataResponse)
    Q_DISABLE_COPY(GetInstanceUefiDataResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
