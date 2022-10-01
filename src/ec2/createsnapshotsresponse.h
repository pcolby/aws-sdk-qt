// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTSRESPONSE_H
#define QTAWS_CREATESNAPSHOTSRESPONSE_H

#include "ec2response.h"
#include "createsnapshotsrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateSnapshotsResponsePrivate;

class QTAWSEC2_EXPORT CreateSnapshotsResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateSnapshotsResponse(const CreateSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSnapshotsResponse)
    Q_DISABLE_COPY(CreateSnapshotsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
