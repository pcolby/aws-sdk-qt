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

#ifndef QTAWS_APPRUNNERREQUEST_P_H
#define QTAWS_APPRUNNERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class AppRunnerRequest;

class QTAWS_EXPORT AppRunnerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AppRunnerRequest::Action action; ///< AppRunner action to be performed.
    QString apiVersion;        ///< AppRunner API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AppRunner request (query string) parameters. @todo?

    AppRunnerRequestPrivate(const AppRunnerRequest::Action action, AppRunnerRequest * const q);
    AppRunnerRequestPrivate(const AppRunnerRequestPrivate &other, AppRunnerRequest * const q);

    static QString toString(const AppRunnerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AppRunnerRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
