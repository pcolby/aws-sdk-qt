/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DISASSOCIATENODERESPONSE_H
#define QTAWS_DISASSOCIATENODERESPONSE_H

#include "opsworkscmresponse.h"
#include "disassociatenoderequest.h"

namespace AWS {

namespace OpsWorksCM {

class DisassociateNodeResponsePrivate;

class QTAWS_EXPORT DisassociateNodeResponse : public OpsWorksCMResponse {
    Q_OBJECT

public:
    DisassociateNodeResponse(const DisassociateNodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateNodeRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DisassociateNodeResponse)
    Q_DISABLE_COPY(DisassociateNodeResponse)

};

} // namespace OpsWorksCM
} // namespace AWS

#endif
