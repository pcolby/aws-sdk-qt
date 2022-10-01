// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETSTATISTICSRESPONSE_H
#define QTAWS_GETBUCKETSTATISTICSRESPONSE_H

#include "macie2response.h"
#include "getbucketstatisticsrequest.h"

namespace QtAws {
namespace Macie2 {

class GetBucketStatisticsResponsePrivate;

class QTAWSMACIE2_EXPORT GetBucketStatisticsResponse : public Macie2Response {
    Q_OBJECT

public:
    GetBucketStatisticsResponse(const GetBucketStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketStatisticsResponse)
    Q_DISABLE_COPY(GetBucketStatisticsResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
