// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEPARAMETERSRESPONSE_P_H
#define QTAWS_GETRELATIONALDATABASEPARAMETERSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseParametersResponse;

class GetRelationalDatabaseParametersResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetRelationalDatabaseParametersResponsePrivate(GetRelationalDatabaseParametersResponse * const q);

    void parseGetRelationalDatabaseParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseParametersResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseParametersResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
