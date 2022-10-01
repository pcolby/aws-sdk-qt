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

#ifndef QTAWS_MWAAREQUEST_P_H
#define QTAWS_MWAAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "mwaarequest.h"

namespace QtAws {
namespace Mwaa {

class MwaaRequest;

class MwaaRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MwaaRequest::Action action; ///< Mwaa action to be performed.
    QString apiVersion;        ///< Mwaa API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Mwaa request (query string) parameters. @todo?

    MwaaRequestPrivate(const MwaaRequest::Action action, MwaaRequest * const q);
    MwaaRequestPrivate(const MwaaRequestPrivate &other, MwaaRequest * const q);

    static QString toString(const MwaaRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MwaaRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif
