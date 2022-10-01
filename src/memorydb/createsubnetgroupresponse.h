// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBNETGROUPRESPONSE_H
#define QTAWS_CREATESUBNETGROUPRESPONSE_H

#include "memorydbresponse.h"
#include "createsubnetgrouprequest.h"

namespace QtAws {
namespace MemoryDb {

class CreateSubnetGroupResponsePrivate;

class QTAWSMEMORYDB_EXPORT CreateSubnetGroupResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    CreateSubnetGroupResponse(const CreateSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSubnetGroupResponse)
    Q_DISABLE_COPY(CreateSubnetGroupResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
