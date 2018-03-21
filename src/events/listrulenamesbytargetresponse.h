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

#ifndef QTAWS_LISTRULENAMESBYTARGETRESPONSE_H
#define QTAWS_LISTRULENAMESBYTARGETRESPONSE_H

#include "eventsresponse.h"
#include "listrulenamesbytargetrequest.h"

namespace AWS {

namespace events {

class ListRuleNamesByTargetResponsePrivate;

class QTAWS_EXPORT ListRuleNamesByTargetResponse : public ListRuleNamesByTargetResponse {
    Q_OBJECT

public:
    ListRuleNamesByTargetResponse(const ListRuleNamesByTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRuleNamesByTargetRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ListRuleNamesByTargetResponse)
    Q_DISABLE_COPY(ListRuleNamesByTargetResponse)

};

} // namespace events
} // namespace AWS

#endif
