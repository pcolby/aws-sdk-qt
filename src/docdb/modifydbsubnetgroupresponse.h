// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSUBNETGROUPRESPONSE_H
#define QTAWS_MODIFYDBSUBNETGROUPRESPONSE_H

#include "docdbresponse.h"
#include "modifydbsubnetgrouprequest.h"

namespace QtAws {
namespace DocDb {

class ModifyDBSubnetGroupResponsePrivate;

class QTAWSDOCDB_EXPORT ModifyDBSubnetGroupResponse : public DocDbResponse {
    Q_OBJECT

public:
    ModifyDBSubnetGroupResponse(const ModifyDBSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDBSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBSubnetGroupResponse)
    Q_DISABLE_COPY(ModifyDBSubnetGroupResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif
