// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVIDEANOMALYFEEDBACKRESPONSE_P_H
#define QTAWS_PROVIDEANOMALYFEEDBACKRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class ProvideAnomalyFeedbackResponse;

class ProvideAnomalyFeedbackResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit ProvideAnomalyFeedbackResponsePrivate(ProvideAnomalyFeedbackResponse * const q);

    void parseProvideAnomalyFeedbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ProvideAnomalyFeedbackResponse)
    Q_DISABLE_COPY(ProvideAnomalyFeedbackResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
