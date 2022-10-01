// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMODELRESPONSE_P_H
#define QTAWS_STOPMODELRESPONSE_P_H

#include "lookoutvisionresponse_p.h"

namespace QtAws {
namespace LookoutVision {

class StopModelResponse;

class StopModelResponsePrivate : public LookoutVisionResponsePrivate {

public:

    explicit StopModelResponsePrivate(StopModelResponse * const q);

    void parseStopModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopModelResponse)
    Q_DISABLE_COPY(StopModelResponsePrivate)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
