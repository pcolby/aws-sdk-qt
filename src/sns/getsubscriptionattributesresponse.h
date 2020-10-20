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

#ifndef QTAWS_GETSUBSCRIPTIONATTRIBUTESRESPONSE_H
#define QTAWS_GETSUBSCRIPTIONATTRIBUTESRESPONSE_H

#include "snsresponse.h"
#include "getsubscriptionattributesrequest.h"

namespace QtAws {
namespace SNS {

class GetSubscriptionAttributesResponsePrivate;

class QTAWS_EXPORT GetSubscriptionAttributesResponse : public SnsResponse {
    Q_OBJECT

public:
    GetSubscriptionAttributesResponse(const GetSubscriptionAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSubscriptionAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSubscriptionAttributesResponse)
    Q_DISABLE_COPY(GetSubscriptionAttributesResponse)

};

} // namespace SNS
} // namespace QtAws

#endif
