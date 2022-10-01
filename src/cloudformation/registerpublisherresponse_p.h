// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERPUBLISHERRESPONSE_P_H
#define QTAWS_REGISTERPUBLISHERRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class RegisterPublisherResponse;

class RegisterPublisherResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit RegisterPublisherResponsePrivate(RegisterPublisherResponse * const q);

    void parseRegisterPublisherResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterPublisherResponse)
    Q_DISABLE_COPY(RegisterPublisherResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
