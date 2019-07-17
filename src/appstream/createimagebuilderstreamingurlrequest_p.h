/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_CREATEIMAGEBUILDERSTREAMINGURLREQUEST_P_H
#define QTAWS_CREATEIMAGEBUILDERSTREAMINGURLREQUEST_P_H

#include "appstreamrequest_p.h"
#include "createimagebuilderstreamingurlrequest.h"

namespace QtAws {
namespace AppStream {

class CreateImageBuilderStreamingURLRequest;

class QTAWS_EXPORT CreateImageBuilderStreamingURLRequestPrivate : public AppStreamRequestPrivate {

public:
    CreateImageBuilderStreamingURLRequestPrivate(const AppStreamRequest::Action action,
                                   CreateImageBuilderStreamingURLRequest * const q);
    CreateImageBuilderStreamingURLRequestPrivate(const CreateImageBuilderStreamingURLRequestPrivate &other,
                                   CreateImageBuilderStreamingURLRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateImageBuilderStreamingURLRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
