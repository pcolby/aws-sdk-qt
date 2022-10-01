// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTACLRESPONSE_H
#define QTAWS_PUTOBJECTACLRESPONSE_H

#include "s3response.h"
#include "putobjectaclrequest.h"

namespace QtAws {
namespace S3 {

class PutObjectAclResponsePrivate;

class QTAWSS3_EXPORT PutObjectAclResponse : public S3Response {
    Q_OBJECT

public:
    PutObjectAclResponse(const PutObjectAclRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutObjectAclRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutObjectAclResponse)
    Q_DISABLE_COPY(PutObjectAclResponse)

};

} // namespace S3
} // namespace QtAws

#endif
