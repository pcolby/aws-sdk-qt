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

#ifndef QTAWS_UNTAGPROJECTREQUEST_P_H
#define QTAWS_UNTAGPROJECTREQUEST_P_H

#include "codestar_p.h"
#include "untagprojectrequest.h"

namespace AWS {

namespace CodeStar {

class UntagProjectRequest;

class QTAWS_EXPORT UntagProjectRequestPrivate : public CodeStarPrivate {

public:
    UntagProjectRequestPrivate(const CodeStar::Action action,
                                   UntagProjectRequest * const q);
    UntagProjectRequestPrivate(const UntagProjectRequestPrivate &other,
                                   UntagProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagProjectRequest)

};

} // namespace CodeStar
} // namespace AWS

#endif
