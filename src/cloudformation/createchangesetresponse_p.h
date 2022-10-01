// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANGESETRESPONSE_P_H
#define QTAWS_CREATECHANGESETRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class CreateChangeSetResponse;

class CreateChangeSetResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit CreateChangeSetResponsePrivate(CreateChangeSetResponse * const q);

    void parseCreateChangeSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateChangeSetResponse)
    Q_DISABLE_COPY(CreateChangeSetResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
