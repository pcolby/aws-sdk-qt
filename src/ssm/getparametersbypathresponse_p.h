// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERSBYPATHRESPONSE_P_H
#define QTAWS_GETPARAMETERSBYPATHRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetParametersByPathResponse;

class GetParametersByPathResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetParametersByPathResponsePrivate(GetParametersByPathResponse * const q);

    void parseGetParametersByPathResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetParametersByPathResponse)
    Q_DISABLE_COPY(GetParametersByPathResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
