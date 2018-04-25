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

#ifndef QTAWS_MODIFYINSTANCEFLEETRESPONSE_H
#define QTAWS_MODIFYINSTANCEFLEETRESPONSE_H

#include "emrresponse.h"
#include "modifyinstancefleetrequest.h"

namespace QtAws {
namespace EMR {

class ModifyInstanceFleetResponsePrivate;

class QTAWS_EXPORT ModifyInstanceFleetResponse : public EmrResponse {
    Q_OBJECT

public:
    ModifyInstanceFleetResponse(const ModifyInstanceFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyInstanceFleetRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceFleetResponse)
    Q_DISABLE_COPY(ModifyInstanceFleetResponse)

};

} // namespace EMR
} // namespace QtAws

#endif
