// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKSETRESPONSE_P_H
#define QTAWS_CREATESTACKSETRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class CreateStackSetResponse;

class CreateStackSetResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit CreateStackSetResponsePrivate(CreateStackSetResponse * const q);

    void parseCreateStackSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStackSetResponse)
    Q_DISABLE_COPY(CreateStackSetResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
