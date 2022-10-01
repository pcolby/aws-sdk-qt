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

#ifndef QTAWS_TRANSFERCONTACTRESPONSE_H
#define QTAWS_TRANSFERCONTACTRESPONSE_H

#include "connectresponse.h"
#include "transfercontactrequest.h"

namespace QtAws {
namespace Connect {

class TransferContactResponsePrivate;

class QTAWSCONNECT_EXPORT TransferContactResponse : public ConnectResponse {
    Q_OBJECT

public:
    TransferContactResponse(const TransferContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TransferContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TransferContactResponse)
    Q_DISABLE_COPY(TransferContactResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
