// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANALYSISPERMISSIONSREQUEST_H
#define QTAWS_DESCRIBEANALYSISPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAnalysisPermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeAnalysisPermissionsRequest : public QuickSightRequest {

public:
    DescribeAnalysisPermissionsRequest(const DescribeAnalysisPermissionsRequest &other);
    DescribeAnalysisPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAnalysisPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
