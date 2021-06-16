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

#ifndef QTAWS_GETRULESRESPONSE_H
#define QTAWS_GETRULESRESPONSE_H

#include "frauddetectorresponse.h"
#include "getrulesrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetRulesResponsePrivate;

class QTAWS_EXPORT GetRulesResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetRulesResponse(const GetRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRulesResponse)
    Q_DISABLE_COPY(GetRulesResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
