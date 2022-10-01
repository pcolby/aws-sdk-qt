// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTSRESPONSE_H
#define QTAWS_LISTPARTSRESPONSE_H

#include "s3response.h"
#include "listpartsrequest.h"

namespace QtAws {
namespace S3 {

class ListPartsResponsePrivate;

class QTAWSS3_EXPORT ListPartsResponse : public S3Response {
    Q_OBJECT

public:
    ListPartsResponse(const ListPartsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPartsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPartsResponse)
    Q_DISABLE_COPY(ListPartsResponse)

};

} // namespace S3
} // namespace QtAws

#endif
