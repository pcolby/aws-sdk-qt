// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANALYSISPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBEANALYSISPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "describeanalysispermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAnalysisPermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeAnalysisPermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeAnalysisPermissionsResponse(const DescribeAnalysisPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAnalysisPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAnalysisPermissionsResponse)
    Q_DISABLE_COPY(DescribeAnalysisPermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
