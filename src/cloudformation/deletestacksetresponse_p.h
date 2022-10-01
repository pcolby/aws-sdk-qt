// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTACKSETRESPONSE_P_H
#define QTAWS_DELETESTACKSETRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DeleteStackSetResponse;

class DeleteStackSetResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DeleteStackSetResponsePrivate(DeleteStackSetResponse * const q);

    void parseDeleteStackSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStackSetResponse)
    Q_DISABLE_COPY(DeleteStackSetResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
