/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LEXRUNTIMESERVICECLIENTREQUEST_P_H
#define QTAWS_LEXRUNTIMESERVICECLIENTREQUEST_P_H

#include "lexruntimeservice_p.h"
#include "lexruntimeserviceclientrequest.h"

namespace AWS {

namespace LexRuntimeService {

class LexRuntimeServiceClientRequest;

class QTAWS_EXPORT LexRuntimeServiceClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    LexRuntimeServiceClientRequest::Action action; ///< LexRuntimeService action to be performed.
    QString apiVersion;        ///< LexRuntimeService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LexRuntimeService request (query string) parameters. @todo?

    LexRuntimeServiceClientRequestPrivate(const LexRuntimeServiceClientRequest::Action action, LexRuntimeServiceClientRequest * const q);
    LexRuntimeServiceClientRequestPrivate(const LexRuntimeServiceClientRequestPrivate &other, LexRuntimeServiceClientRequest * const q);

    static QString toString(const LexRuntimeServiceClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LexRuntimeServiceClientRequest)

};

} // namespace LexRuntimeService
} // namespace AWS

#endif
