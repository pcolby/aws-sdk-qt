// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANSRESPONSE_H
#define QTAWS_DESCRIBESAVINGSPLANSRESPONSE_H

#include "savingsplansresponse.h"
#include "describesavingsplansrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlansResponsePrivate;

class QTAWSSAVINGSPLANS_EXPORT DescribeSavingsPlansResponse : public SavingsPlansResponse {
    Q_OBJECT

public:
    DescribeSavingsPlansResponse(const DescribeSavingsPlansRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSavingsPlansRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSavingsPlansResponse)
    Q_DISABLE_COPY(DescribeSavingsPlansResponse)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
