// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPROVEDORIGINRESPONSE_H
#define QTAWS_DISASSOCIATEAPPROVEDORIGINRESPONSE_H

#include "connectresponse.h"
#include "disassociateapprovedoriginrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateApprovedOriginResponsePrivate;

class QTAWSCONNECT_EXPORT DisassociateApprovedOriginResponse : public ConnectResponse {
    Q_OBJECT

public:
    DisassociateApprovedOriginResponse(const DisassociateApprovedOriginRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateApprovedOriginRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateApprovedOriginResponse)
    Q_DISABLE_COPY(DisassociateApprovedOriginResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
