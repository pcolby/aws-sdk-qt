// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEFASTSNAPSHOTRESTORESRESPONSE_H
#define QTAWS_DISABLEFASTSNAPSHOTRESTORESRESPONSE_H

#include "ec2response.h"
#include "disablefastsnapshotrestoresrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableFastSnapshotRestoresResponsePrivate;

class QTAWSEC2_EXPORT DisableFastSnapshotRestoresResponse : public Ec2Response {
    Q_OBJECT

public:
    DisableFastSnapshotRestoresResponse(const DisableFastSnapshotRestoresRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableFastSnapshotRestoresRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableFastSnapshotRestoresResponse)
    Q_DISABLE_COPY(DisableFastSnapshotRestoresResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
