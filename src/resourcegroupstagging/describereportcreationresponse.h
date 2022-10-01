// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTCREATIONRESPONSE_H
#define QTAWS_DESCRIBEREPORTCREATIONRESPONSE_H

#include "resourcegroupstaggingresponse.h"
#include "describereportcreationrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class DescribeReportCreationResponsePrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT DescribeReportCreationResponse : public ResourceGroupsTaggingResponse {
    Q_OBJECT

public:
    DescribeReportCreationResponse(const DescribeReportCreationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReportCreationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReportCreationResponse)
    Q_DISABLE_COPY(DescribeReportCreationResponse)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
