// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESNAPSHOTFROMRECYCLEBINRESPONSE_H
#define QTAWS_RESTORESNAPSHOTFROMRECYCLEBINRESPONSE_H

#include "ec2response.h"
#include "restoresnapshotfromrecyclebinrequest.h"

namespace QtAws {
namespace Ec2 {

class RestoreSnapshotFromRecycleBinResponsePrivate;

class QTAWSEC2_EXPORT RestoreSnapshotFromRecycleBinResponse : public Ec2Response {
    Q_OBJECT

public:
    RestoreSnapshotFromRecycleBinResponse(const RestoreSnapshotFromRecycleBinRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreSnapshotFromRecycleBinRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreSnapshotFromRecycleBinResponse)
    Q_DISABLE_COPY(RestoreSnapshotFromRecycleBinResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
