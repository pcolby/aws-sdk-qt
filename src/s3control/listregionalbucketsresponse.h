// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGIONALBUCKETSRESPONSE_H
#define QTAWS_LISTREGIONALBUCKETSRESPONSE_H

#include "s3controlresponse.h"
#include "listregionalbucketsrequest.h"

namespace QtAws {
namespace S3Control {

class ListRegionalBucketsResponsePrivate;

class QTAWSS3CONTROL_EXPORT ListRegionalBucketsResponse : public S3ControlResponse {
    Q_OBJECT

public:
    ListRegionalBucketsResponse(const ListRegionalBucketsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRegionalBucketsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRegionalBucketsResponse)
    Q_DISABLE_COPY(ListRegionalBucketsResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
