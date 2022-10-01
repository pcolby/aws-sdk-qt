// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBONUSPAYMENTSRESPONSE_H
#define QTAWS_LISTBONUSPAYMENTSRESPONSE_H

#include "mturkresponse.h"
#include "listbonuspaymentsrequest.h"

namespace QtAws {
namespace MTurk {

class ListBonusPaymentsResponsePrivate;

class QTAWSMTURK_EXPORT ListBonusPaymentsResponse : public MTurkResponse {
    Q_OBJECT

public:
    ListBonusPaymentsResponse(const ListBonusPaymentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBonusPaymentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBonusPaymentsResponse)
    Q_DISABLE_COPY(ListBonusPaymentsResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
