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

#ifndef QTAWS_MODIFYINSTANCEATTRIBUTERESPONSE_H
#define QTAWS_MODIFYINSTANCEATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "modifyinstanceattributerequest.h"

namespace AWS {

namespace EC2 {

class ModifyInstanceAttributeResponsePrivate;

class QTAWS_EXPORT ModifyInstanceAttributeResponse : public ModifyInstanceAttributeResponse {
    Q_OBJECT

public:
    ModifyInstanceAttributeResponse(const ModifyInstanceAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyInstanceAttributeRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ModifyInstanceAttributeResponse)
    Q_DISABLE_COPY(ModifyInstanceAttributeResponse)

};

} // namespace EC2
} // namespace AWS

#endif
