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

#ifndef QTAWS_GETMAPPINGRESPONSE_H
#define QTAWS_GETMAPPINGRESPONSE_H

#include "glueresponse.h"
#include "getmappingrequest.h"

namespace QtAws {
namespace Glue {

class GetMappingResponsePrivate;

class QTAWS_EXPORT GetMappingResponse : public GlueResponse {
    Q_OBJECT

public:
    GetMappingResponse(const GetMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMappingResponse)
    Q_DISABLE_COPY(GetMappingResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
