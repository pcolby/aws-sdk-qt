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

#ifndef QTAWS_KMSREQUEST_P_H
#define QTAWS_KMSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kmsrequest.h"

namespace QtAws {
namespace KMS {

class KmsRequest;

class QTAWS_EXPORT KmsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KmsRequest::Action action; ///< KMS action to be performed.
    QString apiVersion;        ///< KMS API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< KMS request (query string) parameters. @todo?

    KmsRequestPrivate(const KmsRequest::Action action, KmsRequest * const q);
    KmsRequestPrivate(const KmsRequestPrivate &other, KmsRequest * const q);

    static QString toString(const KmsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KmsRequest)

};

} // namespace KMS
} // namespace QtAws

#endif
