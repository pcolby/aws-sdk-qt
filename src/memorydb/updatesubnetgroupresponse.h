// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBNETGROUPRESPONSE_H
#define QTAWS_UPDATESUBNETGROUPRESPONSE_H

#include "memorydbresponse.h"
#include "updatesubnetgrouprequest.h"

namespace QtAws {
namespace MemoryDb {

class UpdateSubnetGroupResponsePrivate;

class QTAWSMEMORYDB_EXPORT UpdateSubnetGroupResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    UpdateSubnetGroupResponse(const UpdateSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSubnetGroupResponse)
    Q_DISABLE_COPY(UpdateSubnetGroupResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
