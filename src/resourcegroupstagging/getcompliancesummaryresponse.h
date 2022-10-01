// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCESUMMARYRESPONSE_H
#define QTAWS_GETCOMPLIANCESUMMARYRESPONSE_H

#include "resourcegroupstaggingresponse.h"
#include "getcompliancesummaryrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class GetComplianceSummaryResponsePrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT GetComplianceSummaryResponse : public ResourceGroupsTaggingResponse {
    Q_OBJECT

public:
    GetComplianceSummaryResponse(const GetComplianceSummaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetComplianceSummaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComplianceSummaryResponse)
    Q_DISABLE_COPY(GetComplianceSummaryResponse)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
