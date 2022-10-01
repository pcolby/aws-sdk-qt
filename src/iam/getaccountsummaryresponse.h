// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSUMMARYRESPONSE_H
#define QTAWS_GETACCOUNTSUMMARYRESPONSE_H

#include "iamresponse.h"
#include "getaccountsummaryrequest.h"

namespace QtAws {
namespace Iam {

class GetAccountSummaryResponsePrivate;

class QTAWSIAM_EXPORT GetAccountSummaryResponse : public IamResponse {
    Q_OBJECT

public:
    GetAccountSummaryResponse(const GetAccountSummaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccountSummaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountSummaryResponse)
    Q_DISABLE_COPY(GetAccountSummaryResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
