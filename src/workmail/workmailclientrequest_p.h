/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_WORKMAILCLIENTREQUEST_P_H
#define QTAWS_WORKMAILCLIENTREQUEST_P_H

#include "_p.h"
#include "request.h"

namespace AWS {

namespace WorkMail {

class WorkMailClientRequest;

class QTAWS_EXPORT WorkMailClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    WorkMailClientRequest::Action action; ///<  action to be performed.
    QString apiVersion;        ///<  API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///<  request (query string) parameters. @todo?

    WorkMailClientRequestPrivate(const WorkMailClientRequest::Action action, WorkMailClientRequest * const q);
    WorkMailClientRequestPrivate(const RequestPrivate &other, WorkMailClientRequest * const q);

    static QString toString(const WorkMailClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WorkMailClientRequest)

};

} // namespace WorkMail
} // namespace AWS

#endif
