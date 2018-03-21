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

#ifndef QTAWS_GETREGEXMATCHSETRESPONSE_H
#define QTAWS_GETREGEXMATCHSETRESPONSE_H

#include "wafregionalresponse.h"
#include "getregexmatchsetrequest.h"

namespace AWS {

namespace WAFRegional {

class GetRegexMatchSetResponsePrivate;

class QTAWS_EXPORT GetRegexMatchSetResponse : public WAFRegionalResponse {
    Q_OBJECT

public:
    GetRegexMatchSetResponse(const GetRegexMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRegexMatchSetRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetRegexMatchSetResponse)
    Q_DISABLE_COPY(GetRegexMatchSetResponse)

};

} // namespace WAFRegional
} // namespace AWS

#endif
