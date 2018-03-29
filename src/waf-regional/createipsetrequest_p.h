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

#ifndef QTAWS_CREATEIPSETREQUEST_P_H
#define QTAWS_CREATEIPSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "createipsetrequest.h"

namespace QtAws {
namespace WAFRegional {

class CreateIPSetRequest;

class QTAWS_EXPORT CreateIPSetRequestPrivate : public WAFRegionalRequestPrivate {

public:
    CreateIPSetRequestPrivate(const WAFRegionalRequest::Action action,
                                   CreateIPSetRequest * const q);
    CreateIPSetRequestPrivate(const CreateIPSetRequestPrivate &other,
                                   CreateIPSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIPSetRequest)

};

} // namespace WAFRegional
} // namespace QtAws

#endif
