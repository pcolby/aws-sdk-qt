// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCETYPESFROMINSTANCEREQUIREMENTSRESPONSE_P_H
#define QTAWS_GETINSTANCETYPESFROMINSTANCEREQUIREMENTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetInstanceTypesFromInstanceRequirementsResponse;

class GetInstanceTypesFromInstanceRequirementsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetInstanceTypesFromInstanceRequirementsResponsePrivate(GetInstanceTypesFromInstanceRequirementsResponse * const q);

    void parseGetInstanceTypesFromInstanceRequirementsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInstanceTypesFromInstanceRequirementsResponse)
    Q_DISABLE_COPY(GetInstanceTypesFromInstanceRequirementsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
