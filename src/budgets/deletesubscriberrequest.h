// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIBERREQUEST_H
#define QTAWS_DELETESUBSCRIBERREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DeleteSubscriberRequestPrivate;

class QTAWSBUDGETS_EXPORT DeleteSubscriberRequest : public BudgetsRequest {

public:
    DeleteSubscriberRequest(const DeleteSubscriberRequest &other);
    DeleteSubscriberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSubscriberRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
