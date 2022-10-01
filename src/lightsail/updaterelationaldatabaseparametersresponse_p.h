// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERELATIONALDATABASEPARAMETERSRESPONSE_P_H
#define QTAWS_UPDATERELATIONALDATABASEPARAMETERSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class UpdateRelationalDatabaseParametersResponse;

class UpdateRelationalDatabaseParametersResponsePrivate : public LightsailResponsePrivate {

public:

    explicit UpdateRelationalDatabaseParametersResponsePrivate(UpdateRelationalDatabaseParametersResponse * const q);

    void parseUpdateRelationalDatabaseParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRelationalDatabaseParametersResponse)
    Q_DISABLE_COPY(UpdateRelationalDatabaseParametersResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
