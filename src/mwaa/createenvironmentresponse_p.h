// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTRESPONSE_P_H
#define QTAWS_CREATEENVIRONMENTRESPONSE_P_H

#include "mwaaresponse_p.h"

namespace QtAws {
namespace Mwaa {

class CreateEnvironmentResponse;

class CreateEnvironmentResponsePrivate : public MwaaResponsePrivate {

public:

    explicit CreateEnvironmentResponsePrivate(CreateEnvironmentResponse * const q);

    void parseCreateEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentResponse)
    Q_DISABLE_COPY(CreateEnvironmentResponsePrivate)

};

} // namespace Mwaa
} // namespace QtAws

#endif
