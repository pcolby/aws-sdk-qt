// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIBERRESPONSE_H
#define QTAWS_DELETESUBSCRIBERRESPONSE_H

#include "budgetsresponse.h"
#include "deletesubscriberrequest.h"

namespace QtAws {
namespace Budgets {

class DeleteSubscriberResponsePrivate;

class QTAWSBUDGETS_EXPORT DeleteSubscriberResponse : public BudgetsResponse {
    Q_OBJECT

public:
    DeleteSubscriberResponse(const DeleteSubscriberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSubscriberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSubscriberResponse)
    Q_DISABLE_COPY(DeleteSubscriberResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
