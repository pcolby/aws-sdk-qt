// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYOPTIONGROUPRESPONSE_H
#define QTAWS_COPYOPTIONGROUPRESPONSE_H

#include "rdsresponse.h"
#include "copyoptiongrouprequest.h"

namespace QtAws {
namespace Rds {

class CopyOptionGroupResponsePrivate;

class QTAWSRDS_EXPORT CopyOptionGroupResponse : public RdsResponse {
    Q_OBJECT

public:
    CopyOptionGroupResponse(const CopyOptionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyOptionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyOptionGroupResponse)
    Q_DISABLE_COPY(CopyOptionGroupResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
