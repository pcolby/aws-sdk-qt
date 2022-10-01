// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSNAPSHOTATTRIBUTERESPONSE_H
#define QTAWS_MODIFYDBSNAPSHOTATTRIBUTERESPONSE_H

#include "rdsresponse.h"
#include "modifydbsnapshotattributerequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBSnapshotAttributeResponsePrivate;

class QTAWSRDS_EXPORT ModifyDBSnapshotAttributeResponse : public RdsResponse {
    Q_OBJECT

public:
    ModifyDBSnapshotAttributeResponse(const ModifyDBSnapshotAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDBSnapshotAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBSnapshotAttributeResponse)
    Q_DISABLE_COPY(ModifyDBSnapshotAttributeResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
