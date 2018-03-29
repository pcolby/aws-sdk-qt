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

#ifndef QTAWS_BATCHCLIENTREQUEST_P_H
#define QTAWS_BATCHCLIENTREQUEST_P_H

#include "batch_p.h"
#include "batchclientrequest.h"

namespace QtAws {
namespace Batch {

class BatchClientRequest;

class QTAWS_EXPORT BatchClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    BatchClientRequest::Action action; ///< Batch action to be performed.
    QString apiVersion;        ///< Batch API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Batch request (query string) parameters. @todo?

    BatchClientRequestPrivate(const BatchClientRequest::Action action, BatchClientRequest * const q);
    BatchClientRequestPrivate(const BatchClientRequestPrivate &other, BatchClientRequest * const q);

    static QString toString(const BatchClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(BatchClientRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
