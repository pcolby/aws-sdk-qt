// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPRESTRICTIONREQUEST_H
#define QTAWS_DESCRIBEIPRESTRICTIONREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeIpRestrictionRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeIpRestrictionRequest : public QuickSightRequest {

public:
    DescribeIpRestrictionRequest(const DescribeIpRestrictionRequest &other);
    DescribeIpRestrictionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIpRestrictionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
