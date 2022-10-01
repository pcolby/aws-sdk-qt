// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONSRESPONSE_H
#define QTAWS_LISTFUNCTIONSRESPONSE_H

#include "cloudfrontresponse.h"
#include "listfunctionsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListFunctionsResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListFunctionsResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListFunctionsResponse(const ListFunctionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFunctionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionsResponse)
    Q_DISABLE_COPY(ListFunctionsResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
