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

#ifndef QTAWS_DELETEBRANCHREQUEST_P_H
#define QTAWS_DELETEBRANCHREQUEST_P_H

#include "codecommit_p.h"
#include "deletebranchrequest.h"

namespace AWS {

namespace CodeCommit {

class DeleteBranchRequest;

class QTAWS_EXPORT DeleteBranchRequestPrivate : public CodeCommitPrivate {

public:
    DeleteBranchRequestPrivate(const CodeCommit::Action action,
                                   DeleteBranchRequest * const q);
    DeleteBranchRequestPrivate(const DeleteBranchRequestPrivate &other,
                                   DeleteBranchRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBranchRequest)

};

} // namespace CodeCommit
} // namespace AWS

#endif
