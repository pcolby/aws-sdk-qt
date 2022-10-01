// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETERMINATIONPROTECTIONRESPONSE_P_H
#define QTAWS_UPDATETERMINATIONPROTECTIONRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class UpdateTerminationProtectionResponse;

class UpdateTerminationProtectionResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit UpdateTerminationProtectionResponsePrivate(UpdateTerminationProtectionResponse * const q);

    void parseUpdateTerminationProtectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTerminationProtectionResponse)
    Q_DISABLE_COPY(UpdateTerminationProtectionResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
