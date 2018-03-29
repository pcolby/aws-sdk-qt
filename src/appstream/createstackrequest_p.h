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

#ifndef QTAWS_CREATESTACKREQUEST_P_H
#define QTAWS_CREATESTACKREQUEST_P_H

#include "appstreamrequest_p.h"
#include "createstackrequest.h"

namespace QtAws {
namespace AppStream {

class CreateStackRequest;

class QTAWS_EXPORT CreateStackRequestPrivate : public AppStreamRequestPrivate {

public:
    CreateStackRequestPrivate(const AppStreamRequest::Action action,
                                   CreateStackRequest * const q);
    CreateStackRequestPrivate(const CreateStackRequestPrivate &other,
                                   CreateStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStackRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
