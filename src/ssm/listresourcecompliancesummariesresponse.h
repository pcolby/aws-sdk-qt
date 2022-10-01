// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCECOMPLIANCESUMMARIESRESPONSE_H
#define QTAWS_LISTRESOURCECOMPLIANCESUMMARIESRESPONSE_H

#include "ssmresponse.h"
#include "listresourcecompliancesummariesrequest.h"

namespace QtAws {
namespace Ssm {

class ListResourceComplianceSummariesResponsePrivate;

class QTAWSSSM_EXPORT ListResourceComplianceSummariesResponse : public SsmResponse {
    Q_OBJECT

public:
    ListResourceComplianceSummariesResponse(const ListResourceComplianceSummariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourceComplianceSummariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceComplianceSummariesResponse)
    Q_DISABLE_COPY(ListResourceComplianceSummariesResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
