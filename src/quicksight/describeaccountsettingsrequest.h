// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTSETTINGSREQUEST_H
#define QTAWS_DESCRIBEACCOUNTSETTINGSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAccountSettingsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeAccountSettingsRequest : public QuickSightRequest {

public:
    DescribeAccountSettingsRequest(const DescribeAccountSettingsRequest &other);
    DescribeAccountSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountSettingsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
