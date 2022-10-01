// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSNAPSHOTTIERRESPONSE_H
#define QTAWS_MODIFYSNAPSHOTTIERRESPONSE_H

#include "ec2response.h"
#include "modifysnapshottierrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifySnapshotTierResponsePrivate;

class QTAWSEC2_EXPORT ModifySnapshotTierResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifySnapshotTierResponse(const ModifySnapshotTierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifySnapshotTierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifySnapshotTierResponse)
    Q_DISABLE_COPY(ModifySnapshotTierResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
