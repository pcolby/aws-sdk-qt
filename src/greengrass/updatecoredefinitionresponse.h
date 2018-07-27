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

#ifndef QTAWS_UPDATECOREDEFINITIONRESPONSE_H
#define QTAWS_UPDATECOREDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "updatecoredefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateCoreDefinitionResponsePrivate;

class QTAWS_EXPORT UpdateCoreDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    UpdateCoreDefinitionResponse(const UpdateCoreDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCoreDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCoreDefinitionResponse)
    Q_DISABLE_COPY(UpdateCoreDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
