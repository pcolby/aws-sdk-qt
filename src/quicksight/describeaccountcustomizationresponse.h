// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTCUSTOMIZATIONRESPONSE_H
#define QTAWS_DESCRIBEACCOUNTCUSTOMIZATIONRESPONSE_H

#include "quicksightresponse.h"
#include "describeaccountcustomizationrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAccountCustomizationResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeAccountCustomizationResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeAccountCustomizationResponse(const DescribeAccountCustomizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccountCustomizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountCustomizationResponse)
    Q_DISABLE_COPY(DescribeAccountCustomizationResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
