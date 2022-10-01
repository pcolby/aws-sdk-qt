// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERRESPONSE_P_H
#define QTAWS_GETPARAMETERRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetParameterResponse;

class GetParameterResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetParameterResponsePrivate(GetParameterResponse * const q);

    void parseGetParameterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetParameterResponse)
    Q_DISABLE_COPY(GetParameterResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
