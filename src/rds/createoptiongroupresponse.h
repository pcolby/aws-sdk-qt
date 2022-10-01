// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPTIONGROUPRESPONSE_H
#define QTAWS_CREATEOPTIONGROUPRESPONSE_H

#include "rdsresponse.h"
#include "createoptiongrouprequest.h"

namespace QtAws {
namespace Rds {

class CreateOptionGroupResponsePrivate;

class QTAWSRDS_EXPORT CreateOptionGroupResponse : public RdsResponse {
    Q_OBJECT

public:
    CreateOptionGroupResponse(const CreateOptionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOptionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOptionGroupResponse)
    Q_DISABLE_COPY(CreateOptionGroupResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
