// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFEEDBACKRESPONSE_P_H
#define QTAWS_GETFEEDBACKRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class GetFeedbackResponse;

class GetFeedbackResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit GetFeedbackResponsePrivate(GetFeedbackResponse * const q);

    void parseGetFeedbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFeedbackResponse)
    Q_DISABLE_COPY(GetFeedbackResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
