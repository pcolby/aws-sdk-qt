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

#ifndef QTAWS_CREATEVAULTRESPONSE_H
#define QTAWS_CREATEVAULTRESPONSE_H

#include "glacierresponse.h"
#include "createvaultrequest.h"

namespace QtAws {
namespace Glacier {

class CreateVaultResponsePrivate;

class QTAWS_EXPORT CreateVaultResponse : public GlacierResponse {
    Q_OBJECT

public:
    CreateVaultResponse(const CreateVaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVaultRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(CreateVaultResponse)
    Q_DISABLE_COPY(CreateVaultResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
