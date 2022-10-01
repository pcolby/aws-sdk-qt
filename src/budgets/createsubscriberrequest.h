// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIBERREQUEST_H
#define QTAWS_CREATESUBSCRIBERREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class CreateSubscriberRequestPrivate;

class QTAWSBUDGETS_EXPORT CreateSubscriberRequest : public BudgetsRequest {

public:
    CreateSubscriberRequest(const CreateSubscriberRequest &other);
    CreateSubscriberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSubscriberRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
