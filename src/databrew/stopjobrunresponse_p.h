// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPJOBRUNRESPONSE_P_H
#define QTAWS_STOPJOBRUNRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class StopJobRunResponse;

class StopJobRunResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit StopJobRunResponsePrivate(StopJobRunResponse * const q);

    void parseStopJobRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopJobRunResponse)
    Q_DISABLE_COPY(StopJobRunResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
