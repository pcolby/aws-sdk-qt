// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSOLUTIONVERSIONCREATIONRESPONSE_P_H
#define QTAWS_STOPSOLUTIONVERSIONCREATIONRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class StopSolutionVersionCreationResponse;

class StopSolutionVersionCreationResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit StopSolutionVersionCreationResponsePrivate(StopSolutionVersionCreationResponse * const q);

    void parseStopSolutionVersionCreationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopSolutionVersionCreationResponse)
    Q_DISABLE_COPY(StopSolutionVersionCreationResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
