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

#ifndef QTAWS_CREATETRIGGERRESPONSE_H
#define QTAWS_CREATETRIGGERRESPONSE_H

#include "glueresponse.h"
#include "createtriggerrequest.h"

namespace QtAws {
namespace Glue {

class CreateTriggerResponsePrivate;

class QTAWS_EXPORT CreateTriggerResponse : public GlueResponse {
    Q_OBJECT

public:
    CreateTriggerResponse(const CreateTriggerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTriggerRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateTriggerResponse)
    Q_DISABLE_COPY(CreateTriggerResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
