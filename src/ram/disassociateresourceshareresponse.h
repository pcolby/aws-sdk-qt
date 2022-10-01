// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOURCESHARERESPONSE_H
#define QTAWS_DISASSOCIATERESOURCESHARERESPONSE_H

#include "ramresponse.h"
#include "disassociateresourcesharerequest.h"

namespace QtAws {
namespace Ram {

class DisassociateResourceShareResponsePrivate;

class QTAWSRAM_EXPORT DisassociateResourceShareResponse : public RamResponse {
    Q_OBJECT

public:
    DisassociateResourceShareResponse(const DisassociateResourceShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateResourceShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateResourceShareResponse)
    Q_DISABLE_COPY(DisassociateResourceShareResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
