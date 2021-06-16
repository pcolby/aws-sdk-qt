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

#ifndef QTAWS_TRANSFERREQUEST_P_H
#define QTAWS_TRANSFERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class TransferRequest;

class QTAWS_EXPORT TransferRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    TransferRequest::Action action; ///< Transfer action to be performed.
    QString apiVersion;        ///< Transfer API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Transfer request (query string) parameters. @todo?

    TransferRequestPrivate(const TransferRequest::Action action, TransferRequest * const q);
    TransferRequestPrivate(const TransferRequestPrivate &other, TransferRequest * const q);

    static QString toString(const TransferRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(TransferRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
