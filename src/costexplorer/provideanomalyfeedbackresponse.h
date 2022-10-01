// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVIDEANOMALYFEEDBACKRESPONSE_H
#define QTAWS_PROVIDEANOMALYFEEDBACKRESPONSE_H

#include "costexplorerresponse.h"
#include "provideanomalyfeedbackrequest.h"

namespace QtAws {
namespace CostExplorer {

class ProvideAnomalyFeedbackResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT ProvideAnomalyFeedbackResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    ProvideAnomalyFeedbackResponse(const ProvideAnomalyFeedbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ProvideAnomalyFeedbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProvideAnomalyFeedbackResponse)
    Q_DISABLE_COPY(ProvideAnomalyFeedbackResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
