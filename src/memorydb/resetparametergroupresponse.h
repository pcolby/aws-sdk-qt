// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETPARAMETERGROUPRESPONSE_H
#define QTAWS_RESETPARAMETERGROUPRESPONSE_H

#include "memorydbresponse.h"
#include "resetparametergrouprequest.h"

namespace QtAws {
namespace MemoryDb {

class ResetParameterGroupResponsePrivate;

class QTAWSMEMORYDB_EXPORT ResetParameterGroupResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    ResetParameterGroupResponse(const ResetParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetParameterGroupResponse)
    Q_DISABLE_COPY(ResetParameterGroupResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
