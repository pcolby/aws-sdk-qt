// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTACLRESPONSE_H
#define QTAWS_GETOBJECTACLRESPONSE_H

#include "s3response.h"
#include "getobjectaclrequest.h"

namespace QtAws {
namespace S3 {

class GetObjectAclResponsePrivate;

class QTAWSS3_EXPORT GetObjectAclResponse : public S3Response {
    Q_OBJECT

public:
    GetObjectAclResponse(const GetObjectAclRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetObjectAclRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectAclResponse)
    Q_DISABLE_COPY(GetObjectAclResponse)

};

} // namespace S3
} // namespace QtAws

#endif
