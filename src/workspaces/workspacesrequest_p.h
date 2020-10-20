/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_WORKSPACESREQUEST_P_H
#define QTAWS_WORKSPACESREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class WorkSpacesRequest;

class QTAWS_EXPORT WorkSpacesRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    WorkSpacesRequest::Action action; ///< WorkSpaces action to be performed.
    QString apiVersion;        ///< WorkSpaces API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< WorkSpaces request (query string) parameters. @todo?

    WorkSpacesRequestPrivate(const WorkSpacesRequest::Action action, WorkSpacesRequest * const q);
    WorkSpacesRequestPrivate(const WorkSpacesRequestPrivate &other, WorkSpacesRequest * const q);

    static QString toString(const WorkSpacesRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WorkSpacesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
