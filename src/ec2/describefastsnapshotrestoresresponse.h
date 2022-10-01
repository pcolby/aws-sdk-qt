// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFASTSNAPSHOTRESTORESRESPONSE_H
#define QTAWS_DESCRIBEFASTSNAPSHOTRESTORESRESPONSE_H

#include "ec2response.h"
#include "describefastsnapshotrestoresrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeFastSnapshotRestoresResponsePrivate;

class QTAWSEC2_EXPORT DescribeFastSnapshotRestoresResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeFastSnapshotRestoresResponse(const DescribeFastSnapshotRestoresRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFastSnapshotRestoresRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFastSnapshotRestoresResponse)
    Q_DISABLE_COPY(DescribeFastSnapshotRestoresResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
