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

#ifndef QTAWS_CREATEQUERYLOGGINGCONFIGRESPONSE_H
#define QTAWS_CREATEQUERYLOGGINGCONFIGRESPONSE_H

#include "route53response.h"
#include "createqueryloggingconfigrequest.h"

namespace QtAws {
namespace Route53 {

class CreateQueryLoggingConfigResponsePrivate;

class QTAWS_EXPORT CreateQueryLoggingConfigResponse : public Route53Response {
    Q_OBJECT

public:
    CreateQueryLoggingConfigResponse(const CreateQueryLoggingConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateQueryLoggingConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateQueryLoggingConfigResponse)
    Q_DISABLE_COPY(CreateQueryLoggingConfigResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
