// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANALYSISREQUEST_H
#define QTAWS_DESCRIBEANALYSISREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAnalysisRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeAnalysisRequest : public QuickSightRequest {

public:
    DescribeAnalysisRequest(const DescribeAnalysisRequest &other);
    DescribeAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAnalysisRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
