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

#ifndef QTAWS_REGISTERWORKFLOWTYPERESPONSE_H
#define QTAWS_REGISTERWORKFLOWTYPERESPONSE_H

#include "swfresponse.h"
#include "registerworkflowtyperequest.h"

namespace QtAws {
namespace Swf {

class RegisterWorkflowTypeResponsePrivate;

class QTAWSSWF_EXPORT RegisterWorkflowTypeResponse : public SwfResponse {
    Q_OBJECT

public:
    RegisterWorkflowTypeResponse(const RegisterWorkflowTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterWorkflowTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterWorkflowTypeResponse)
    Q_DISABLE_COPY(RegisterWorkflowTypeResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
