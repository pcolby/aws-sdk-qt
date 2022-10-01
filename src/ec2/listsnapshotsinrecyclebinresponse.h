// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNAPSHOTSINRECYCLEBINRESPONSE_H
#define QTAWS_LISTSNAPSHOTSINRECYCLEBINRESPONSE_H

#include "ec2response.h"
#include "listsnapshotsinrecyclebinrequest.h"

namespace QtAws {
namespace Ec2 {

class ListSnapshotsInRecycleBinResponsePrivate;

class QTAWSEC2_EXPORT ListSnapshotsInRecycleBinResponse : public Ec2Response {
    Q_OBJECT

public:
    ListSnapshotsInRecycleBinResponse(const ListSnapshotsInRecycleBinRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSnapshotsInRecycleBinRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSnapshotsInRecycleBinResponse)
    Q_DISABLE_COPY(ListSnapshotsInRecycleBinResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
