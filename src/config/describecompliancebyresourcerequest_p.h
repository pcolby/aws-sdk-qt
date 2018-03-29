/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBECOMPLIANCEBYRESOURCEREQUEST_P_H
#define QTAWS_DESCRIBECOMPLIANCEBYRESOURCEREQUEST_P_H

#include "configservice_p.h"
#include "describecompliancebyresourcerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeComplianceByResourceRequest;

class QTAWS_EXPORT DescribeComplianceByResourceRequestPrivate : public ConfigServicePrivate {

public:
    DescribeComplianceByResourceRequestPrivate(const ConfigService::Action action,
                                   DescribeComplianceByResourceRequest * const q);
    DescribeComplianceByResourceRequestPrivate(const DescribeComplianceByResourceRequestPrivate &other,
                                   DescribeComplianceByResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeComplianceByResourceRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
