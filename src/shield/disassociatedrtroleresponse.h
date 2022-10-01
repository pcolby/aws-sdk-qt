// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDRTROLERESPONSE_H
#define QTAWS_DISASSOCIATEDRTROLERESPONSE_H

#include "shieldresponse.h"
#include "disassociatedrtrolerequest.h"

namespace QtAws {
namespace Shield {

class DisassociateDRTRoleResponsePrivate;

class QTAWSSHIELD_EXPORT DisassociateDRTRoleResponse : public ShieldResponse {
    Q_OBJECT

public:
    DisassociateDRTRoleResponse(const DisassociateDRTRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateDRTRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateDRTRoleResponse)
    Q_DISABLE_COPY(DisassociateDRTRoleResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
