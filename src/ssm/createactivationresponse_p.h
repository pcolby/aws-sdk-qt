// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIVATIONRESPONSE_P_H
#define QTAWS_CREATEACTIVATIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class CreateActivationResponse;

class CreateActivationResponsePrivate : public SsmResponsePrivate {

public:

    explicit CreateActivationResponsePrivate(CreateActivationResponse * const q);

    void parseCreateActivationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateActivationResponse)
    Q_DISABLE_COPY(CreateActivationResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
