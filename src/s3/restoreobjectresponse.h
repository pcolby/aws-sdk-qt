// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREOBJECTRESPONSE_H
#define QTAWS_RESTOREOBJECTRESPONSE_H

#include "s3response.h"
#include "restoreobjectrequest.h"

namespace QtAws {
namespace S3 {

class RestoreObjectResponsePrivate;

class QTAWSS3_EXPORT RestoreObjectResponse : public S3Response {
    Q_OBJECT

public:
    RestoreObjectResponse(const RestoreObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreObjectResponse)
    Q_DISABLE_COPY(RestoreObjectResponse)

};

} // namespace S3
} // namespace QtAws

#endif
