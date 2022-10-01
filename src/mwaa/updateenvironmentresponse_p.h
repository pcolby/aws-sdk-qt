// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTRESPONSE_P_H
#define QTAWS_UPDATEENVIRONMENTRESPONSE_P_H

#include "mwaaresponse_p.h"

namespace QtAws {
namespace Mwaa {

class UpdateEnvironmentResponse;

class UpdateEnvironmentResponsePrivate : public MwaaResponsePrivate {

public:

    explicit UpdateEnvironmentResponsePrivate(UpdateEnvironmentResponse * const q);

    void parseUpdateEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEnvironmentResponse)
    Q_DISABLE_COPY(UpdateEnvironmentResponsePrivate)

};

} // namespace Mwaa
} // namespace QtAws

#endif
