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

#ifndef QTAWS_TRANSLATEREQUEST_P_H
#define QTAWS_TRANSLATEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "translaterequest.h"

namespace QtAws {
namespace Translate {

class TranslateRequest;

class QTAWS_EXPORT TranslateRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    TranslateRequest::Action action; ///< Translate action to be performed.
    QString apiVersion;        ///< Translate API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Translate request (query string) parameters. @todo?

    TranslateRequestPrivate(const TranslateRequest::Action action, TranslateRequest * const q);
    TranslateRequestPrivate(const TranslateRequestPrivate &other, TranslateRequest * const q);

    static QString toString(const TranslateRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(TranslateRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
