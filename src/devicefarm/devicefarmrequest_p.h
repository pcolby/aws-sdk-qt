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

#ifndef QTAWS_DEVICEFARMREQUEST_P_H
#define QTAWS_DEVICEFARMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeviceFarmRequest;

class QTAWS_EXPORT DeviceFarmRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DeviceFarmRequest::Action action; ///< DeviceFarm action to be performed.
    QString apiVersion;        ///< DeviceFarm API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DeviceFarm request (query string) parameters. @todo?

    DeviceFarmRequestPrivate(const DeviceFarmRequest::Action action, DeviceFarmRequest * const q);
    DeviceFarmRequestPrivate(const DeviceFarmRequestPrivate &other, DeviceFarmRequest * const q);

    static QString toString(const DeviceFarmRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DeviceFarmRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
