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

#ifndef QTAWS_IOT1CLICKPROJECTSREQUEST_P_H
#define QTAWS_IOT1CLICKPROJECTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iot1clickprojectsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class IoT1ClickProjectsRequest;

class IoT1ClickProjectsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoT1ClickProjectsRequest::Action action; ///< IoT1ClickProjects action to be performed.
    QString apiVersion;        ///< IoT1ClickProjects API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoT1ClickProjects request (query string) parameters. @todo?

    IoT1ClickProjectsRequestPrivate(const IoT1ClickProjectsRequest::Action action, IoT1ClickProjectsRequest * const q);
    IoT1ClickProjectsRequestPrivate(const IoT1ClickProjectsRequestPrivate &other, IoT1ClickProjectsRequest * const q);

    static QString toString(const IoT1ClickProjectsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoT1ClickProjectsRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
