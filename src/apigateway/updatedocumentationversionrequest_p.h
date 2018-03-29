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

#ifndef QTAWS_UPDATEDOCUMENTATIONVERSIONREQUEST_P_H
#define QTAWS_UPDATEDOCUMENTATIONVERSIONREQUEST_P_H

#include "apigateway_p.h"
#include "updatedocumentationversionrequest.h"

namespace QtAws {
namespace APIGateway {

class UpdateDocumentationVersionRequest;

class QTAWS_EXPORT UpdateDocumentationVersionRequestPrivate : public APIGatewayPrivate {

public:
    UpdateDocumentationVersionRequestPrivate(const APIGateway::Action action,
                                   UpdateDocumentationVersionRequest * const q);
    UpdateDocumentationVersionRequestPrivate(const UpdateDocumentationVersionRequestPrivate &other,
                                   UpdateDocumentationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDocumentationVersionRequest)

};

} // namespace APIGateway
} // namespace QtAws

#endif
