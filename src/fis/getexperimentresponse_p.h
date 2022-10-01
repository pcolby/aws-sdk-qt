// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPERIMENTRESPONSE_P_H
#define QTAWS_GETEXPERIMENTRESPONSE_P_H

#include "fisresponse_p.h"

namespace QtAws {
namespace Fis {

class GetExperimentResponse;

class GetExperimentResponsePrivate : public FisResponsePrivate {

public:

    explicit GetExperimentResponsePrivate(GetExperimentResponse * const q);

    void parseGetExperimentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExperimentResponse)
    Q_DISABLE_COPY(GetExperimentResponsePrivate)

};

} // namespace Fis
} // namespace QtAws

#endif
