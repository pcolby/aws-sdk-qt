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

#ifndef QTAWS_LISTIDENTITIESREQUEST_P_H
#define QTAWS_LISTIDENTITIESREQUEST_P_H

#include "ses_p.h"
#include "listidentitiesrequest.h"

namespace QtAws {
namespace SES {

class ListIdentitiesRequest;

class QTAWS_EXPORT ListIdentitiesRequestPrivate : public SESPrivate {

public:
    ListIdentitiesRequestPrivate(const SES::Action action,
                                   ListIdentitiesRequest * const q);
    ListIdentitiesRequestPrivate(const ListIdentitiesRequestPrivate &other,
                                   ListIdentitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIdentitiesRequest)

};

} // namespace SES
} // namespace QtAws

#endif
