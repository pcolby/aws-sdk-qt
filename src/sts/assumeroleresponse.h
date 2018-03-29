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

#ifndef QTAWS_ASSUMEROLERESPONSE_H
#define QTAWS_ASSUMEROLERESPONSE_H

#include "stsresponse.h"
#include "assumerolerequest.h"

namespace AWS {

namespace STS {

class AssumeRoleResponsePrivate;

class QTAWS_EXPORT AssumeRoleResponse : public STSResponse {
    Q_OBJECT

public:
    AssumeRoleResponse(const AssumeRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssumeRoleRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(AssumeRoleResponse)
    Q_DISABLE_COPY(AssumeRoleResponse)

};

} // namespace STS
} // namespace AWS

#endif
