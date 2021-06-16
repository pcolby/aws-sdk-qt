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

#ifndef QTAWS_GREENGRASSREQUEST_P_H
#define QTAWS_GREENGRASSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GreengrassRequest;

class QTAWS_EXPORT GreengrassRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    GreengrassRequest::Action action; ///< Greengrass action to be performed.
    QString apiVersion;        ///< Greengrass API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Greengrass request (query string) parameters. @todo?

    GreengrassRequestPrivate(const GreengrassRequest::Action action, GreengrassRequest * const q);
    GreengrassRequestPrivate(const GreengrassRequestPrivate &other, GreengrassRequest * const q);

    static QString toString(const GreengrassRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(GreengrassRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
