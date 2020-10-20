/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_CREATEHITTYPERESPONSE_H
#define QTAWS_CREATEHITTYPERESPONSE_H

#include "mturkresponse.h"
#include "createhittyperequest.h"

namespace QtAws {
namespace MTurk {

class CreateHITTypeResponsePrivate;

class QTAWS_EXPORT CreateHITTypeResponse : public MTurkResponse {
    Q_OBJECT

public:
    CreateHITTypeResponse(const CreateHITTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHITTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHITTypeResponse)
    Q_DISABLE_COPY(CreateHITTypeResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
