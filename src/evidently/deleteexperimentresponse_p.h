// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIMENTRESPONSE_P_H
#define QTAWS_DELETEEXPERIMENTRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class DeleteExperimentResponse;

class DeleteExperimentResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit DeleteExperimentResponsePrivate(DeleteExperimentResponse * const q);

    void parseDeleteExperimentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteExperimentResponse)
    Q_DISABLE_COPY(DeleteExperimentResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
