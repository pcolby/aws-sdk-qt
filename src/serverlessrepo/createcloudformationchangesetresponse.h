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

#ifndef QTAWS_CREATECLOUDFORMATIONCHANGESETRESPONSE_H
#define QTAWS_CREATECLOUDFORMATIONCHANGESETRESPONSE_H

#include "serverlessreporesponse.h"
#include "createcloudformationchangesetrequest.h"

namespace AWS {

namespace serverlessrepo {

class CreateCloudFormationChangeSetResponsePrivate;

class QTAWS_EXPORT CreateCloudFormationChangeSetResponse : public CreateCloudFormationChangeSetResponse {
    Q_OBJECT

public:
    CreateCloudFormationChangeSetResponse(const CreateCloudFormationChangeSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCloudFormationChangeSetRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateCloudFormationChangeSetResponse)
    Q_DISABLE_COPY(CreateCloudFormationChangeSetResponse)

};

} // namespace serverlessrepo
} // namespace AWS

#endif
