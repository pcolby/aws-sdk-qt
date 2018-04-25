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

#ifndef QTAWS_IMPORTSNAPSHOTREQUEST_P_H
#define QTAWS_IMPORTSNAPSHOTREQUEST_P_H

#include "ec2request_p.h"
#include "importsnapshotrequest.h"

namespace QtAws {
namespace EC2 {

class ImportSnapshotRequest;

class QTAWS_EXPORT ImportSnapshotRequestPrivate : public Ec2RequestPrivate {

public:
    ImportSnapshotRequestPrivate(const Ec2Request::Action action,
                                   ImportSnapshotRequest * const q);
    ImportSnapshotRequestPrivate(const ImportSnapshotRequestPrivate &other,
                                   ImportSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportSnapshotRequest)

};

} // namespace EC2
} // namespace QtAws

#endif
