// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIBERRESPONSE_H
#define QTAWS_UPDATESUBSCRIBERRESPONSE_H

#include "budgetsresponse.h"
#include "updatesubscriberrequest.h"

namespace QtAws {
namespace Budgets {

class UpdateSubscriberResponsePrivate;

class QTAWSBUDGETS_EXPORT UpdateSubscriberResponse : public BudgetsResponse {
    Q_OBJECT

public:
    UpdateSubscriberResponse(const UpdateSubscriberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSubscriberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSubscriberResponse)
    Q_DISABLE_COPY(UpdateSubscriberResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
