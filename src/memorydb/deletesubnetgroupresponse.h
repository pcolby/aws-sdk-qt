// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBNETGROUPRESPONSE_H
#define QTAWS_DELETESUBNETGROUPRESPONSE_H

#include "memorydbresponse.h"
#include "deletesubnetgrouprequest.h"

namespace QtAws {
namespace MemoryDb {

class DeleteSubnetGroupResponsePrivate;

class QTAWSMEMORYDB_EXPORT DeleteSubnetGroupResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    DeleteSubnetGroupResponse(const DeleteSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSubnetGroupResponse)
    Q_DISABLE_COPY(DeleteSubnetGroupResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
