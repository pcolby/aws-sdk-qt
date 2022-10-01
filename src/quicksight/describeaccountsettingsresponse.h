// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTSETTINGSRESPONSE_H
#define QTAWS_DESCRIBEACCOUNTSETTINGSRESPONSE_H

#include "quicksightresponse.h"
#include "describeaccountsettingsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAccountSettingsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeAccountSettingsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeAccountSettingsResponse(const DescribeAccountSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccountSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountSettingsResponse)
    Q_DISABLE_COPY(DescribeAccountSettingsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
