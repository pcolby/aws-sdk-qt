// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPLICATIONFLEETRESPONSE_H
#define QTAWS_DISASSOCIATEAPPLICATIONFLEETRESPONSE_H

#include "appstreamresponse.h"
#include "disassociateapplicationfleetrequest.h"

namespace QtAws {
namespace AppStream {

class DisassociateApplicationFleetResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DisassociateApplicationFleetResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DisassociateApplicationFleetResponse(const DisassociateApplicationFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateApplicationFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateApplicationFleetResponse)
    Q_DISABLE_COPY(DisassociateApplicationFleetResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
