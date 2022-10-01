// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSRESPONSE_H
#define QTAWS_LISTDISTRIBUTIONSRESPONSE_H

#include "cloudfrontresponse.h"
#include "listdistributionsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListDistributionsResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListDistributionsResponse(const ListDistributionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDistributionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionsResponse)
    Q_DISABLE_COPY(ListDistributionsResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
