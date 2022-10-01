// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELUPDATESTACKRESPONSE_P_H
#define QTAWS_CANCELUPDATESTACKRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class CancelUpdateStackResponse;

class CancelUpdateStackResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit CancelUpdateStackResponsePrivate(CancelUpdateStackResponse * const q);

    void parseCancelUpdateStackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelUpdateStackResponse)
    Q_DISABLE_COPY(CancelUpdateStackResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
