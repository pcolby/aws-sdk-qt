// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTACKRESPONSE_P_H
#define QTAWS_DELETESTACKRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DeleteStackResponse;

class DeleteStackResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DeleteStackResponsePrivate(DeleteStackResponse * const q);

    void parseDeleteStackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStackResponse)
    Q_DISABLE_COPY(DeleteStackResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
