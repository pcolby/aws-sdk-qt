// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYOPTIONGROUPRESPONSE_H
#define QTAWS_MODIFYOPTIONGROUPRESPONSE_H

#include "rdsresponse.h"
#include "modifyoptiongrouprequest.h"

namespace QtAws {
namespace Rds {

class ModifyOptionGroupResponsePrivate;

class QTAWSRDS_EXPORT ModifyOptionGroupResponse : public RdsResponse {
    Q_OBJECT

public:
    ModifyOptionGroupResponse(const ModifyOptionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyOptionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyOptionGroupResponse)
    Q_DISABLE_COPY(ModifyOptionGroupResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
