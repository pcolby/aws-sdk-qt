// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPLIANCESUMMARIESRESPONSE_H
#define QTAWS_LISTCOMPLIANCESUMMARIESRESPONSE_H

#include "ssmresponse.h"
#include "listcompliancesummariesrequest.h"

namespace QtAws {
namespace Ssm {

class ListComplianceSummariesResponsePrivate;

class QTAWSSSM_EXPORT ListComplianceSummariesResponse : public SsmResponse {
    Q_OBJECT

public:
    ListComplianceSummariesResponse(const ListComplianceSummariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListComplianceSummariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComplianceSummariesResponse)
    Q_DISABLE_COPY(ListComplianceSummariesResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
