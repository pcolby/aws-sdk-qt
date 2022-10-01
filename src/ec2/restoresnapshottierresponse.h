// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESNAPSHOTTIERRESPONSE_H
#define QTAWS_RESTORESNAPSHOTTIERRESPONSE_H

#include "ec2response.h"
#include "restoresnapshottierrequest.h"

namespace QtAws {
namespace Ec2 {

class RestoreSnapshotTierResponsePrivate;

class QTAWSEC2_EXPORT RestoreSnapshotTierResponse : public Ec2Response {
    Q_OBJECT

public:
    RestoreSnapshotTierResponse(const RestoreSnapshotTierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreSnapshotTierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreSnapshotTierResponse)
    Q_DISABLE_COPY(RestoreSnapshotTierResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
