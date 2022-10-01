// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROTECTIONGROUPRESPONSE_H
#define QTAWS_DELETEPROTECTIONGROUPRESPONSE_H

#include "shieldresponse.h"
#include "deleteprotectiongrouprequest.h"

namespace QtAws {
namespace Shield {

class DeleteProtectionGroupResponsePrivate;

class QTAWSSHIELD_EXPORT DeleteProtectionGroupResponse : public ShieldResponse {
    Q_OBJECT

public:
    DeleteProtectionGroupResponse(const DeleteProtectionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProtectionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProtectionGroupResponse)
    Q_DISABLE_COPY(DeleteProtectionGroupResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
