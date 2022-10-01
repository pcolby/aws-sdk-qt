// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVIDEANOMALYFEEDBACKREQUEST_H
#define QTAWS_PROVIDEANOMALYFEEDBACKREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class ProvideAnomalyFeedbackRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT ProvideAnomalyFeedbackRequest : public CostExplorerRequest {

public:
    ProvideAnomalyFeedbackRequest(const ProvideAnomalyFeedbackRequest &other);
    ProvideAnomalyFeedbackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProvideAnomalyFeedbackRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
