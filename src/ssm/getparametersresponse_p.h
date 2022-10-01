// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERSRESPONSE_P_H
#define QTAWS_GETPARAMETERSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetParametersResponse;

class GetParametersResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetParametersResponsePrivate(GetParametersResponse * const q);

    void parseGetParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetParametersResponse)
    Q_DISABLE_COPY(GetParametersResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
