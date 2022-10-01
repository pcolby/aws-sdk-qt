// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHEMEPERMISSIONSREQUEST_H
#define QTAWS_DESCRIBETHEMEPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeThemePermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeThemePermissionsRequest : public QuickSightRequest {

public:
    DescribeThemePermissionsRequest(const DescribeThemePermissionsRequest &other);
    DescribeThemePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThemePermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
