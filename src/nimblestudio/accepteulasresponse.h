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

#ifndef QTAWS_ACCEPTEULASRESPONSE_H
#define QTAWS_ACCEPTEULASRESPONSE_H

#include "nimblestudioresponse.h"
#include "accepteulasrequest.h"

namespace QtAws {
namespace NimbleStudio {

class AcceptEulasResponsePrivate;

class QTAWS_EXPORT AcceptEulasResponse : public NimbleStudioResponse {
    Q_OBJECT

public:
    AcceptEulasResponse(const AcceptEulasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptEulasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptEulasResponse)
    Q_DISABLE_COPY(AcceptEulasResponse)

};

} // namespace NimbleStudio
} // namespace QtAws

#endif
