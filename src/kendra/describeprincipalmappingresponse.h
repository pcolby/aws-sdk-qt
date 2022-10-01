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

#ifndef QTAWS_DESCRIBEPRINCIPALMAPPINGRESPONSE_H
#define QTAWS_DESCRIBEPRINCIPALMAPPINGRESPONSE_H

#include "kendraresponse.h"
#include "describeprincipalmappingrequest.h"

namespace QtAws {
namespace Kendra {

class DescribePrincipalMappingResponsePrivate;

class QTAWSKENDRA_EXPORT DescribePrincipalMappingResponse : public KendraResponse {
    Q_OBJECT

public:
    DescribePrincipalMappingResponse(const DescribePrincipalMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePrincipalMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePrincipalMappingResponse)
    Q_DISABLE_COPY(DescribePrincipalMappingResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
