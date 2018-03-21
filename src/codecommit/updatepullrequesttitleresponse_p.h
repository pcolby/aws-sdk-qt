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

#ifndef QTAWS_UPDATEPULLREQUESTTITLERESPONSE_P_H
#define QTAWS_UPDATEPULLREQUESTTITLERESPONSE_P_H

#include "codecommitresponse.h"
#include "updatepullrequesttitlerequest.h"

namespace AWS {

namespace CodeCommit {

class UpdatePullRequestTitleResponse;

class QTAWS_EXPORT UpdatePullRequestTitleResponsePrivate : public CodeCommitResponsePrivate {
    Q_OBJECT

public:

    UpdatePullRequestTitleResponsePrivate(UpdatePullRequestTitleResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePullRequestTitleResponse)
    Q_DISABLE_COPY(UpdatePullRequestTitleResponsePrivate)

};

} // namespace CodeCommit
} // namespace AWS

#endif
