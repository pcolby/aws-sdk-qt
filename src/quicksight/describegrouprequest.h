// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPREQUEST_H
#define QTAWS_DESCRIBEGROUPREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeGroupRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeGroupRequest : public QuickSightRequest {

public:
    DescribeGroupRequest(const DescribeGroupRequest &other);
    DescribeGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGroupRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
