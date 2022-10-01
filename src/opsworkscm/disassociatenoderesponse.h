// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATENODERESPONSE_H
#define QTAWS_DISASSOCIATENODERESPONSE_H

#include "opsworkscmresponse.h"
#include "disassociatenoderequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DisassociateNodeResponsePrivate;

class QTAWSOPSWORKSCM_EXPORT DisassociateNodeResponse : public OpsWorksCmResponse {
    Q_OBJECT

public:
    DisassociateNodeResponse(const DisassociateNodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateNodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateNodeResponse)
    Q_DISABLE_COPY(DisassociateNodeResponse)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
