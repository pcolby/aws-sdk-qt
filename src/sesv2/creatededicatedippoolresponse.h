/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATEDEDICATEDIPPOOLRESPONSE_H
#define QTAWS_CREATEDEDICATEDIPPOOLRESPONSE_H

#include "sesv2response.h"
#include "creatededicatedippoolrequest.h"

namespace QtAws {
namespace SESV2 {

class CreateDedicatedIpPoolResponsePrivate;

class QTAWSSESV2_EXPORT CreateDedicatedIpPoolResponse : public Sesv2Response {
    Q_OBJECT

public:
    CreateDedicatedIpPoolResponse(const CreateDedicatedIpPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDedicatedIpPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDedicatedIpPoolResponse)
    Q_DISABLE_COPY(CreateDedicatedIpPoolResponse)

};

} // namespace SESV2
} // namespace QtAws

#endif
