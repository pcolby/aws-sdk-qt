// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROTECTIONGROUPRESPONSE_H
#define QTAWS_UPDATEPROTECTIONGROUPRESPONSE_H

#include "shieldresponse.h"
#include "updateprotectiongrouprequest.h"

namespace QtAws {
namespace Shield {

class UpdateProtectionGroupResponsePrivate;

class QTAWSSHIELD_EXPORT UpdateProtectionGroupResponse : public ShieldResponse {
    Q_OBJECT

public:
    UpdateProtectionGroupResponse(const UpdateProtectionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateProtectionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProtectionGroupResponse)
    Q_DISABLE_COPY(UpdateProtectionGroupResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
