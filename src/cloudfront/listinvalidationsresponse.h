// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINVALIDATIONSRESPONSE_H
#define QTAWS_LISTINVALIDATIONSRESPONSE_H

#include "cloudfrontresponse.h"
#include "listinvalidationsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListInvalidationsResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListInvalidationsResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListInvalidationsResponse(const ListInvalidationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInvalidationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInvalidationsResponse)
    Q_DISABLE_COPY(ListInvalidationsResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
