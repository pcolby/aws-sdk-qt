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

#ifndef QTAWS_LICENSEMANAGERREQUEST_P_H
#define QTAWS_LICENSEMANAGERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class LicenseManagerRequest;

class QTAWS_EXPORT LicenseManagerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LicenseManagerRequest::Action action; ///< LicenseManager action to be performed.
    QString apiVersion;        ///< LicenseManager API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LicenseManager request (query string) parameters. @todo?

    LicenseManagerRequestPrivate(const LicenseManagerRequest::Action action, LicenseManagerRequest * const q);
    LicenseManagerRequestPrivate(const LicenseManagerRequestPrivate &other, LicenseManagerRequest * const q);

    static QString toString(const LicenseManagerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LicenseManagerRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
