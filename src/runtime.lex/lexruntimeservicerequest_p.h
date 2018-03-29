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

#ifndef QTAWS_LEXRUNTIMESERVICEREQUEST_P_H
#define QTAWS_LEXRUNTIMESERVICEREQUEST_P_H

#include "lexruntimeservice_p.h"
#include "lexruntimeservicerequest.h"

namespace QtAws {
namespace LexRuntimeService {

class LexRuntimeServiceRequest;

class QTAWS_EXPORT LexRuntimeServiceRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LexRuntimeServiceRequest::Action action; ///< LexRuntimeService action to be performed.
    QString apiVersion;        ///< LexRuntimeService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LexRuntimeService request (query string) parameters. @todo?

    LexRuntimeServiceRequestPrivate(const LexRuntimeServiceRequest::Action action, LexRuntimeServiceRequest * const q);
    LexRuntimeServiceRequestPrivate(const LexRuntimeServiceRequestPrivate &other, LexRuntimeServiceRequest * const q);

    static QString toString(const LexRuntimeServiceRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LexRuntimeServiceRequest)

};

} // namespace LexRuntimeService
} // namespace QtAws

#endif
