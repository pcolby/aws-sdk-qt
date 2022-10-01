// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSNAPSHOTATTRIBUTERESPONSE_H
#define QTAWS_MODIFYSNAPSHOTATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "modifysnapshotattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifySnapshotAttributeResponsePrivate;

class QTAWSEC2_EXPORT ModifySnapshotAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifySnapshotAttributeResponse(const ModifySnapshotAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifySnapshotAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifySnapshotAttributeResponse)
    Q_DISABLE_COPY(ModifySnapshotAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
