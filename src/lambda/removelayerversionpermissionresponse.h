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

#ifndef QTAWS_REMOVELAYERVERSIONPERMISSIONRESPONSE_H
#define QTAWS_REMOVELAYERVERSIONPERMISSIONRESPONSE_H

#include "lambdaresponse.h"
#include "removelayerversionpermissionrequest.h"

namespace QtAws {
namespace Lambda {

class RemoveLayerVersionPermissionResponsePrivate;

class QTAWSLAMBDA_EXPORT RemoveLayerVersionPermissionResponse : public LambdaResponse {
    Q_OBJECT

public:
    RemoveLayerVersionPermissionResponse(const RemoveLayerVersionPermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveLayerVersionPermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveLayerVersionPermissionResponse)
    Q_DISABLE_COPY(RemoveLayerVersionPermissionResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
