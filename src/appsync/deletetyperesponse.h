/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_DELETETYPERESPONSE_H
#define QTAWS_DELETETYPERESPONSE_H

#include "appsyncresponse.h"
#include "deletetyperequest.h"

namespace QtAws {
namespace AppSync {

class DeleteTypeResponsePrivate;

class QTAWS_EXPORT DeleteTypeResponse : public AppSyncResponse {
    Q_OBJECT

public:
    DeleteTypeResponse(const DeleteTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTypeRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(DeleteTypeResponse)
    Q_DISABLE_COPY(DeleteTypeResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
