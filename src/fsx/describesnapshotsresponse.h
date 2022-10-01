// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSRESPONSE_H
#define QTAWS_DESCRIBESNAPSHOTSRESPONSE_H

#include "fsxresponse.h"
#include "describesnapshotsrequest.h"

namespace QtAws {
namespace FSx {

class DescribeSnapshotsResponsePrivate;

class QTAWSFSX_EXPORT DescribeSnapshotsResponse : public FSxResponse {
    Q_OBJECT

public:
    DescribeSnapshotsResponse(const DescribeSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSnapshotsResponse)
    Q_DISABLE_COPY(DescribeSnapshotsResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
