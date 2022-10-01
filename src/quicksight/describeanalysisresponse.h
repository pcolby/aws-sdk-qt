// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANALYSISRESPONSE_H
#define QTAWS_DESCRIBEANALYSISRESPONSE_H

#include "quicksightresponse.h"
#include "describeanalysisrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAnalysisResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeAnalysisResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeAnalysisResponse(const DescribeAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAnalysisResponse)
    Q_DISABLE_COPY(DescribeAnalysisResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
