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

#ifndef QTAWS_GETDIFFERENCESREQUEST_P_H
#define QTAWS_GETDIFFERENCESREQUEST_P_H

#include "codecommit_p.h"
#include "getdifferencesrequest.h"

namespace AWS {

namespace CodeCommit {

class GetDifferencesRequest;

class QTAWS_EXPORT GetDifferencesRequestPrivate : public CodeCommitPrivate {

public:
    GetDifferencesRequestPrivate(const CodeCommit::Action action,
                                   GetDifferencesRequest * const q);
    GetDifferencesRequestPrivate(const GetDifferencesRequestPrivate &other,
                                   GetDifferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDifferencesRequest)

};

} // namespace CodeCommit
} // namespace AWS

#endif
