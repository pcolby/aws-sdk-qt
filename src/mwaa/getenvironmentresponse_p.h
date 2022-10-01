// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTRESPONSE_P_H
#define QTAWS_GETENVIRONMENTRESPONSE_P_H

#include "mwaaresponse_p.h"

namespace QtAws {
namespace Mwaa {

class GetEnvironmentResponse;

class GetEnvironmentResponsePrivate : public MwaaResponsePrivate {

public:

    explicit GetEnvironmentResponsePrivate(GetEnvironmentResponse * const q);

    void parseGetEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEnvironmentResponse)
    Q_DISABLE_COPY(GetEnvironmentResponsePrivate)

};

} // namespace Mwaa
} // namespace QtAws

#endif
