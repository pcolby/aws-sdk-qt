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

#ifndef QTAWS_GETADMINACCOUNTRESPONSE_H
#define QTAWS_GETADMINACCOUNTRESPONSE_H

#include "fmsresponse.h"
#include "getadminaccountrequest.h"

namespace QtAws {
namespace FMS {

class GetAdminAccountResponsePrivate;

class QTAWS_EXPORT GetAdminAccountResponse : public FMSResponse {
    Q_OBJECT

public:
    GetAdminAccountResponse(const GetAdminAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAdminAccountRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(GetAdminAccountResponse)
    Q_DISABLE_COPY(GetAdminAccountResponse)

};

} // namespace FMS
} // namespace QtAws

#endif
