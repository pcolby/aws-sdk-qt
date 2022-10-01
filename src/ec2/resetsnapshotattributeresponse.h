// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETSNAPSHOTATTRIBUTERESPONSE_H
#define QTAWS_RESETSNAPSHOTATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "resetsnapshotattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ResetSnapshotAttributeResponsePrivate;

class QTAWSEC2_EXPORT ResetSnapshotAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    ResetSnapshotAttributeResponse(const ResetSnapshotAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetSnapshotAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetSnapshotAttributeResponse)
    Q_DISABLE_COPY(ResetSnapshotAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
