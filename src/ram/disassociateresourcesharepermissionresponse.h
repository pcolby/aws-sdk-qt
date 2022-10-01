// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOURCESHAREPERMISSIONRESPONSE_H
#define QTAWS_DISASSOCIATERESOURCESHAREPERMISSIONRESPONSE_H

#include "ramresponse.h"
#include "disassociateresourcesharepermissionrequest.h"

namespace QtAws {
namespace Ram {

class DisassociateResourceSharePermissionResponsePrivate;

class QTAWSRAM_EXPORT DisassociateResourceSharePermissionResponse : public RamResponse {
    Q_OBJECT

public:
    DisassociateResourceSharePermissionResponse(const DisassociateResourceSharePermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateResourceSharePermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateResourceSharePermissionResponse)
    Q_DISABLE_COPY(DisassociateResourceSharePermissionResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
