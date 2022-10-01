/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_BATCHDESCRIBEMODELPACKAGEREQUEST_P_H
#define QTAWS_BATCHDESCRIBEMODELPACKAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "batchdescribemodelpackagerequest.h"

namespace QtAws {
namespace SageMaker {

class BatchDescribeModelPackageRequest;

class BatchDescribeModelPackageRequestPrivate : public SageMakerRequestPrivate {

public:
    BatchDescribeModelPackageRequestPrivate(const SageMakerRequest::Action action,
                                   BatchDescribeModelPackageRequest * const q);
    BatchDescribeModelPackageRequestPrivate(const BatchDescribeModelPackageRequestPrivate &other,
                                   BatchDescribeModelPackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDescribeModelPackageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
