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

#ifndef QTAWS_MODIFYLUNACLIENTRESPONSE_H
#define QTAWS_MODIFYLUNACLIENTRESPONSE_H

#include "cloudhsmresponse.h"
#include "modifylunaclientrequest.h"

namespace QtAws {
namespace CloudHSM {

class ModifyLunaClientResponsePrivate;

class QTAWS_EXPORT ModifyLunaClientResponse : public CloudHSMResponse {
    Q_OBJECT

public:
    ModifyLunaClientResponse(const ModifyLunaClientRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyLunaClientRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyLunaClientResponse)
    Q_DISABLE_COPY(ModifyLunaClientResponse)

};

} // namespace CloudHSM
} // namespace QtAws

#endif
