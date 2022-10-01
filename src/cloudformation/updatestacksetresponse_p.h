// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKSETRESPONSE_P_H
#define QTAWS_UPDATESTACKSETRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class UpdateStackSetResponse;

class UpdateStackSetResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit UpdateStackSetResponsePrivate(UpdateStackSetResponse * const q);

    void parseUpdateStackSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStackSetResponse)
    Q_DISABLE_COPY(UpdateStackSetResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
