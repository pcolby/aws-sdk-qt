// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIBERREQUEST_H
#define QTAWS_UPDATESUBSCRIBERREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class UpdateSubscriberRequestPrivate;

class QTAWSBUDGETS_EXPORT UpdateSubscriberRequest : public BudgetsRequest {

public:
    UpdateSubscriberRequest(const UpdateSubscriberRequest &other);
    UpdateSubscriberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSubscriberRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
