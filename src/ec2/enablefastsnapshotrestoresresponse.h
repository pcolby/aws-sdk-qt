// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEFASTSNAPSHOTRESTORESRESPONSE_H
#define QTAWS_ENABLEFASTSNAPSHOTRESTORESRESPONSE_H

#include "ec2response.h"
#include "enablefastsnapshotrestoresrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableFastSnapshotRestoresResponsePrivate;

class QTAWSEC2_EXPORT EnableFastSnapshotRestoresResponse : public Ec2Response {
    Q_OBJECT

public:
    EnableFastSnapshotRestoresResponse(const EnableFastSnapshotRestoresRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableFastSnapshotRestoresRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableFastSnapshotRestoresResponse)
    Q_DISABLE_COPY(EnableFastSnapshotRestoresResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
