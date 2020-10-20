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

#ifndef QTAWS_WORKDOCSREQUEST_P_H
#define QTAWS_WORKDOCSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class WorkDocsRequest;

class QTAWS_EXPORT WorkDocsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    WorkDocsRequest::Action action; ///< WorkDocs action to be performed.
    QString apiVersion;        ///< WorkDocs API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< WorkDocs request (query string) parameters. @todo?

    WorkDocsRequestPrivate(const WorkDocsRequest::Action action, WorkDocsRequest * const q);
    WorkDocsRequestPrivate(const WorkDocsRequestPrivate &other, WorkDocsRequest * const q);

    static QString toString(const WorkDocsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WorkDocsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
