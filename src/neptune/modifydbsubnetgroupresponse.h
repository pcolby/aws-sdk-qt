// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSUBNETGROUPRESPONSE_H
#define QTAWS_MODIFYDBSUBNETGROUPRESPONSE_H

#include "neptuneresponse.h"
#include "modifydbsubnetgrouprequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBSubnetGroupResponsePrivate;

class QTAWSNEPTUNE_EXPORT ModifyDBSubnetGroupResponse : public NeptuneResponse {
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

} // namespace Neptune
} // namespace QtAws

#endif
