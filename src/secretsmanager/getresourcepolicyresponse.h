/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_GETRESOURCEPOLICYRESPONSE_H
#define QTAWS_GETRESOURCEPOLICYRESPONSE_H

#include "secretsmanagerresponse.h"
#include "getresourcepolicyrequest.h"

namespace QtAws {
namespace SecretsManager {

class GetResourcePolicyResponsePrivate;

class QTAWS_EXPORT GetResourcePolicyResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    GetResourcePolicyResponse(const GetResourcePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourcePolicyRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(GetResourcePolicyResponse)
    Q_DISABLE_COPY(GetResourcePolicyResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
