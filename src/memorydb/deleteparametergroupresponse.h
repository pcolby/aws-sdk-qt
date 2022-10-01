// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARAMETERGROUPRESPONSE_H
#define QTAWS_DELETEPARAMETERGROUPRESPONSE_H

#include "memorydbresponse.h"
#include "deleteparametergrouprequest.h"

namespace QtAws {
namespace MemoryDb {

class DeleteParameterGroupResponsePrivate;

class QTAWSMEMORYDB_EXPORT DeleteParameterGroupResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    DeleteParameterGroupResponse(const DeleteParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteParameterGroupResponse)
    Q_DISABLE_COPY(DeleteParameterGroupResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
