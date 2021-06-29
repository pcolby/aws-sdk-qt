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

#ifndef QTAWS_SETIDENTITYMAILFROMDOMAINRESPONSE_H
#define QTAWS_SETIDENTITYMAILFROMDOMAINRESPONSE_H

#include "sesresponse.h"
#include "setidentitymailfromdomainrequest.h"

namespace QtAws {
namespace SES {

class SetIdentityMailFromDomainResponsePrivate;

class QTAWSSES_EXPORT SetIdentityMailFromDomainResponse : public SesResponse {
    Q_OBJECT

public:
    SetIdentityMailFromDomainResponse(const SetIdentityMailFromDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetIdentityMailFromDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityMailFromDomainResponse)
    Q_DISABLE_COPY(SetIdentityMailFromDomainResponse)

};

} // namespace SES
} // namespace QtAws

#endif
