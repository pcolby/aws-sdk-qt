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

#ifndef QTAWS_DELETEIPAMSCOPERESPONSE_H
#define QTAWS_DELETEIPAMSCOPERESPONSE_H

#include "ec2response.h"
#include "deleteipamscoperequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteIpamScopeResponsePrivate;

class QTAWSEC2_EXPORT DeleteIpamScopeResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteIpamScopeResponse(const DeleteIpamScopeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIpamScopeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIpamScopeResponse)
    Q_DISABLE_COPY(DeleteIpamScopeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
