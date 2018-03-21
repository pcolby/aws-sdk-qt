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

#ifndef QTAWS_UPDATEASSOCIATIONSTATUSRESPONSE_H
#define QTAWS_UPDATEASSOCIATIONSTATUSRESPONSE_H

#include "ssmresponse.h"
#include "updateassociationstatusrequest.h"

namespace AWS {

namespace ssm {

class UpdateAssociationStatusResponsePrivate;

class QTAWS_EXPORT UpdateAssociationStatusResponse : public UpdateAssociationStatusResponse {
    Q_OBJECT

public:
    UpdateAssociationStatusResponse(const UpdateAssociationStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAssociationStatusRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateAssociationStatusResponse)
    Q_DISABLE_COPY(UpdateAssociationStatusResponse)

};

} // namespace ssm
} // namespace AWS

#endif
