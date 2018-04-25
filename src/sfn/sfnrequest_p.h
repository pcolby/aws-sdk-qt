/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_SFNREQUEST_P_H
#define QTAWS_SFNREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sfnrequest.h"

namespace QtAws {
namespace SFN {

class SfnRequest;

class QTAWS_EXPORT SfnRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SfnRequest::Action action; ///< SFN action to be performed.
    QString apiVersion;        ///< SFN API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SFN request (query string) parameters. @todo?

    SfnRequestPrivate(const SfnRequest::Action action, SfnRequest * const q);
    SfnRequestPrivate(const SfnRequestPrivate &other, SfnRequest * const q);

    static QString toString(const SfnRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SfnRequest)

};

} // namespace SFN
} // namespace QtAws

#endif
