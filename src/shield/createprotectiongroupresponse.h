// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROTECTIONGROUPRESPONSE_H
#define QTAWS_CREATEPROTECTIONGROUPRESPONSE_H

#include "shieldresponse.h"
#include "createprotectiongrouprequest.h"

namespace QtAws {
namespace Shield {

class CreateProtectionGroupResponsePrivate;

class QTAWSSHIELD_EXPORT CreateProtectionGroupResponse : public ShieldResponse {
    Q_OBJECT

public:
    CreateProtectionGroupResponse(const CreateProtectionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProtectionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProtectionGroupResponse)
    Q_DISABLE_COPY(CreateProtectionGroupResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
