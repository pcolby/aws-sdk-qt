/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATERULEREQUEST_H
#define QTAWS_CREATERULEREQUEST_H

#include "wafregionalrequest.h"

namespace AWS {

namespace WAFRegional {

class CreateRuleRequestPrivate;

class QTAWS_EXPORT CreateRuleRequest : public WAFRegionalRequest {

public:
    CreateRuleRequest(const CreateRuleRequest &other);
    CreateRuleRequest();

    virtual bool isValid() const;


protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(CreateRuleRequest)

}

} // namespace WAFRegional
} // namespace AWS

#endif
