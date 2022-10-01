// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTSRESPONSE_H
#define QTAWS_GETSNAPSHOTSRESPONSE_H

#include "kendraresponse.h"
#include "getsnapshotsrequest.h"

namespace QtAws {
namespace Kendra {

class GetSnapshotsResponsePrivate;

class QTAWSKENDRA_EXPORT GetSnapshotsResponse : public KendraResponse {
    Q_OBJECT

public:
    GetSnapshotsResponse(const GetSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSnapshotsResponse)
    Q_DISABLE_COPY(GetSnapshotsResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
