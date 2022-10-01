// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARAMETERGROUPRESPONSE_H
#define QTAWS_UPDATEPARAMETERGROUPRESPONSE_H

#include "memorydbresponse.h"
#include "updateparametergrouprequest.h"

namespace QtAws {
namespace MemoryDb {

class UpdateParameterGroupResponsePrivate;

class QTAWSMEMORYDB_EXPORT UpdateParameterGroupResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    UpdateParameterGroupResponse(const UpdateParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateParameterGroupResponse)
    Q_DISABLE_COPY(UpdateParameterGroupResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
