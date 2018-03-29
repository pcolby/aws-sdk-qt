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

#ifndef QTAWS_EFSREQUEST_P_H
#define QTAWS_EFSREQUEST_P_H

#include "efs_p.h"
#include "efsrequest.h"

namespace QtAws {
namespace EFS {

class EFSRequest;

class QTAWS_EXPORT EFSRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EFSRequest::Action action; ///< EFS action to be performed.
    QString apiVersion;        ///< EFS API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< EFS request (query string) parameters. @todo?

    EFSRequestPrivate(const EFSRequest::Action action, EFSRequest * const q);
    EFSRequestPrivate(const EFSRequestPrivate &other, EFSRequest * const q);

    static QString toString(const EFSRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EFSRequest)

};

} // namespace EFS
} // namespace QtAws

#endif
