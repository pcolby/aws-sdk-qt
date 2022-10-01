// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATETYPERESPONSE_P_H
#define QTAWS_ACTIVATETYPERESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ActivateTypeResponse;

class ActivateTypeResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ActivateTypeResponsePrivate(ActivateTypeResponse * const q);

    void parseActivateTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ActivateTypeResponse)
    Q_DISABLE_COPY(ActivateTypeResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
