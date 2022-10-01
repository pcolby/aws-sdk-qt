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

#ifndef QTAWS_GETRESOURCEPOLICIESRESPONSE_H
#define QTAWS_GETRESOURCEPOLICIESRESPONSE_H

#include "ramresponse.h"
#include "getresourcepoliciesrequest.h"

namespace QtAws {
namespace Ram {

class GetResourcePoliciesResponsePrivate;

class QTAWSRAM_EXPORT GetResourcePoliciesResponse : public RamResponse {
    Q_OBJECT

public:
    GetResourcePoliciesResponse(const GetResourcePoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourcePoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourcePoliciesResponse)
    Q_DISABLE_COPY(GetResourcePoliciesResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
