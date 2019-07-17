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

#ifndef QTAWS_DELETECUSTOMACTIONTYPERESPONSE_H
#define QTAWS_DELETECUSTOMACTIONTYPERESPONSE_H

#include "codepipelineresponse.h"
#include "deletecustomactiontyperequest.h"

namespace QtAws {
namespace CodePipeline {

class DeleteCustomActionTypeResponsePrivate;

class QTAWS_EXPORT DeleteCustomActionTypeResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    DeleteCustomActionTypeResponse(const DeleteCustomActionTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCustomActionTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomActionTypeResponse)
    Q_DISABLE_COPY(DeleteCustomActionTypeResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
