/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_CREATEDEPLOYMENTRESPONSE_H
#define QTAWS_CREATEDEPLOYMENTRESPONSE_H

#include "amplifyresponse.h"
#include "createdeploymentrequest.h"

namespace QtAws {
namespace Amplify {

class CreateDeploymentResponsePrivate;

class QTAWS_EXPORT CreateDeploymentResponse : public AmplifyResponse {
    Q_OBJECT

public:
    CreateDeploymentResponse(const CreateDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeploymentResponse)
    Q_DISABLE_COPY(CreateDeploymentResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif
