// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHEMEREQUEST_H
#define QTAWS_DESCRIBETHEMEREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeThemeRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeThemeRequest : public QuickSightRequest {

public:
    DescribeThemeRequest(const DescribeThemeRequest &other);
    DescribeThemeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThemeRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
