// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANOMALYSUBSCRIPTIONREQUEST_H
#define QTAWS_UPDATEANOMALYSUBSCRIPTIONREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class UpdateAnomalySubscriptionRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT UpdateAnomalySubscriptionRequest : public CostExplorerRequest {

public:
    UpdateAnomalySubscriptionRequest(const UpdateAnomalySubscriptionRequest &other);
    UpdateAnomalySubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAnomalySubscriptionRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
