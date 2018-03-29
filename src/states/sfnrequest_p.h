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

#ifndef QTAWS_SFNREQUEST_P_H
#define QTAWS_SFNREQUEST_P_H

#include "sfn_p.h"
#include "sfnrequest.h"

namespace QtAws {
namespace SFN {

class SFNRequest;

class QTAWS_EXPORT SFNRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SFNRequest::Action action; ///< SFN action to be performed.
    QString apiVersion;        ///< SFN API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SFN request (query string) parameters. @todo?

    SFNRequestPrivate(const SFNRequest::Action action, SFNRequest * const q);
    SFNRequestPrivate(const SFNRequestPrivate &other, SFNRequest * const q);

    static QString toString(const SFNRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SFNRequest)

};

} // namespace SFN
} // namespace QtAws

#endif
