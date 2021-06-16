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

#ifndef QTAWS_DELETESERVICETEMPLATERESPONSE_H
#define QTAWS_DELETESERVICETEMPLATERESPONSE_H

#include "protonresponse.h"
#include "deleteservicetemplaterequest.h"

namespace QtAws {
namespace Proton {

class DeleteServiceTemplateResponsePrivate;

class QTAWS_EXPORT DeleteServiceTemplateResponse : public ProtonResponse {
    Q_OBJECT

public:
    DeleteServiceTemplateResponse(const DeleteServiceTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteServiceTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceTemplateResponse)
    Q_DISABLE_COPY(DeleteServiceTemplateResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
