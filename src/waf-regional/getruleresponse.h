/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETRULERESPONSE_H
#define QTAWS_GETRULERESPONSE_H

#include "waf-regionalresponse.h"
#include "getrulerequest.h"

namespace AWS {

namespace waf-regional {

class GetRuleResponsePrivate;

class QTAWS_EXPORT GetRuleResponse : public GetRuleResponse {
    Q_OBJECT

public:
    GetRuleResponse(const GetRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRuleRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetRuleResponse)
    Q_DISABLE_COPY(GetRuleResponse)

};

} // namespace waf-regional
} // namespace AWS

#endif
