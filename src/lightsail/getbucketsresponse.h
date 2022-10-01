// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETSRESPONSE_H
#define QTAWS_GETBUCKETSRESPONSE_H

#include "lightsailresponse.h"
#include "getbucketsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBucketsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetBucketsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetBucketsResponse(const GetBucketsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketsResponse)
    Q_DISABLE_COPY(GetBucketsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
