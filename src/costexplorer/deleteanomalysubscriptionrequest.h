// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANOMALYSUBSCRIPTIONREQUEST_H
#define QTAWS_DELETEANOMALYSUBSCRIPTIONREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class DeleteAnomalySubscriptionRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT DeleteAnomalySubscriptionRequest : public CostExplorerRequest {

public:
    DeleteAnomalySubscriptionRequest(const DeleteAnomalySubscriptionRequest &other);
    DeleteAnomalySubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAnomalySubscriptionRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
