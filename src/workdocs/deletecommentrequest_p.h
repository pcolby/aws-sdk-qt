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

#ifndef QTAWS_DELETECOMMENTREQUEST_P_H
#define QTAWS_DELETECOMMENTREQUEST_P_H

#include "workdocsrequest_p.h"
#include "deletecommentrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteCommentRequest;

class QTAWS_EXPORT DeleteCommentRequestPrivate : public WorkDocsRequestPrivate {

public:
    DeleteCommentRequestPrivate(const WorkDocsRequest::Action action,
                                   DeleteCommentRequest * const q);
    DeleteCommentRequestPrivate(const DeleteCommentRequestPrivate &other,
                                   DeleteCommentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCommentRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
