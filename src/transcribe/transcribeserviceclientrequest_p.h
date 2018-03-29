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

#ifndef QTAWS_TRANSCRIBESERVICECLIENTREQUEST_P_H
#define QTAWS_TRANSCRIBESERVICECLIENTREQUEST_P_H

#include "transcribeservice_p.h"
#include "transcribeserviceclientrequest.h"

namespace AWS {

namespace TranscribeService {

class TranscribeServiceClientRequest;

class QTAWS_EXPORT TranscribeServiceClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    TranscribeServiceClientRequest::Action action; ///< TranscribeService action to be performed.
    QString apiVersion;        ///< TranscribeService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< TranscribeService request (query string) parameters. @todo?

    TranscribeServiceClientRequestPrivate(const TranscribeServiceClientRequest::Action action, TranscribeServiceClientRequest * const q);
    TranscribeServiceClientRequestPrivate(const TranscribeServiceClientRequestPrivate &other, TranscribeServiceClientRequest * const q);

    static QString toString(const TranscribeServiceClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(TranscribeServiceClientRequest)

};

} // namespace TranscribeService
} // namespace AWS

#endif
