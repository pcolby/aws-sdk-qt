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

#ifndef QTAWS_DELETECOMMENTCONTENTREQUEST_P_H
#define QTAWS_DELETECOMMENTCONTENTREQUEST_P_H

#include "codecommitrequest_p.h"
#include "deletecommentcontentrequest.h"

namespace QtAws {
namespace CodeCommit {

class DeleteCommentContentRequest;

class QTAWS_EXPORT DeleteCommentContentRequestPrivate : public CodeCommitRequestPrivate {

public:
    DeleteCommentContentRequestPrivate(const CodeCommit::Action action,
                                   DeleteCommentContentRequest * const q);
    DeleteCommentContentRequestPrivate(const DeleteCommentContentRequestPrivate &other,
                                   DeleteCommentContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCommentContentRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
