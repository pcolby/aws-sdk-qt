// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESINPROTECTIONGROUPRESPONSE_H
#define QTAWS_LISTRESOURCESINPROTECTIONGROUPRESPONSE_H

#include "shieldresponse.h"
#include "listresourcesinprotectiongrouprequest.h"

namespace QtAws {
namespace Shield {

class ListResourcesInProtectionGroupResponsePrivate;

class QTAWSSHIELD_EXPORT ListResourcesInProtectionGroupResponse : public ShieldResponse {
    Q_OBJECT

public:
    ListResourcesInProtectionGroupResponse(const ListResourcesInProtectionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourcesInProtectionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourcesInProtectionGroupResponse)
    Q_DISABLE_COPY(ListResourcesInProtectionGroupResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
