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

#ifndef QTAWS_GETSERVICEROLEFORACCOUNTRESPONSE_H
#define QTAWS_GETSERVICEROLEFORACCOUNTRESPONSE_H

#include "greengrassresponse.h"
#include "getserviceroleforaccountrequest.h"

namespace QtAws {
namespace Greengrass {

class GetServiceRoleForAccountResponsePrivate;

class QTAWS_EXPORT GetServiceRoleForAccountResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetServiceRoleForAccountResponse(const GetServiceRoleForAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServiceRoleForAccountRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(GetServiceRoleForAccountResponse)
    Q_DISABLE_COPY(GetServiceRoleForAccountResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
