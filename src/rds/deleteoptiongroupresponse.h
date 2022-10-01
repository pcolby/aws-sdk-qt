// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPTIONGROUPRESPONSE_H
#define QTAWS_DELETEOPTIONGROUPRESPONSE_H

#include "rdsresponse.h"
#include "deleteoptiongrouprequest.h"

namespace QtAws {
namespace Rds {

class DeleteOptionGroupResponsePrivate;

class QTAWSRDS_EXPORT DeleteOptionGroupResponse : public RdsResponse {
    Q_OBJECT

public:
    DeleteOptionGroupResponse(const DeleteOptionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOptionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOptionGroupResponse)
    Q_DISABLE_COPY(DeleteOptionGroupResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
