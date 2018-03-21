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

#ifndef QTAWS_DELETEASSOCIATIONRESPONSE_H
#define QTAWS_DELETEASSOCIATIONRESPONSE_H

#include "ssmresponse.h"
#include "deleteassociationrequest.h"

namespace AWS {

namespace SSM {

class DeleteAssociationResponsePrivate;

class QTAWS_EXPORT DeleteAssociationResponse : public SSMResponse {
    Q_OBJECT

public:
    DeleteAssociationResponse(const DeleteAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAssociationRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteAssociationResponse)
    Q_DISABLE_COPY(DeleteAssociationResponse)

};

} // namespace SSM
} // namespace AWS

#endif
