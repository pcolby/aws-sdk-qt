// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANOMALYSUBSCRIPTIONREQUEST_H
#define QTAWS_CREATEANOMALYSUBSCRIPTIONREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class CreateAnomalySubscriptionRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT CreateAnomalySubscriptionRequest : public CostExplorerRequest {

public:
    CreateAnomalySubscriptionRequest(const CreateAnomalySubscriptionRequest &other);
    CreateAnomalySubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAnomalySubscriptionRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
