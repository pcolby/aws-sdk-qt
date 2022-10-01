// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTECTIONGROUPSRESPONSE_H
#define QTAWS_LISTPROTECTIONGROUPSRESPONSE_H

#include "shieldresponse.h"
#include "listprotectiongroupsrequest.h"

namespace QtAws {
namespace Shield {

class ListProtectionGroupsResponsePrivate;

class QTAWSSHIELD_EXPORT ListProtectionGroupsResponse : public ShieldResponse {
    Q_OBJECT

public:
    ListProtectionGroupsResponse(const ListProtectionGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProtectionGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProtectionGroupsResponse)
    Q_DISABLE_COPY(ListProtectionGroupsResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
