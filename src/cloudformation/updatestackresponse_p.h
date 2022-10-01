// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKRESPONSE_P_H
#define QTAWS_UPDATESTACKRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class UpdateStackResponse;

class UpdateStackResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit UpdateStackResponsePrivate(UpdateStackResponse * const q);

    void parseUpdateStackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStackResponse)
    Q_DISABLE_COPY(UpdateStackResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
