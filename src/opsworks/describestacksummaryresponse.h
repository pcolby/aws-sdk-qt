// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSUMMARYRESPONSE_H
#define QTAWS_DESCRIBESTACKSUMMARYRESPONSE_H

#include "opsworksresponse.h"
#include "describestacksummaryrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeStackSummaryResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeStackSummaryResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeStackSummaryResponse(const DescribeStackSummaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStackSummaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackSummaryResponse)
    Q_DISABLE_COPY(DescribeStackSummaryResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
