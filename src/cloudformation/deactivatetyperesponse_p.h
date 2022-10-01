// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATETYPERESPONSE_P_H
#define QTAWS_DEACTIVATETYPERESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DeactivateTypeResponse;

class DeactivateTypeResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DeactivateTypeResponsePrivate(DeactivateTypeResponse * const q);

    void parseDeactivateTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeactivateTypeResponse)
    Q_DISABLE_COPY(DeactivateTypeResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
