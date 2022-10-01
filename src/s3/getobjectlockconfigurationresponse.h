// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTLOCKCONFIGURATIONRESPONSE_H
#define QTAWS_GETOBJECTLOCKCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "getobjectlockconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetObjectLockConfigurationResponsePrivate;

class QTAWSS3_EXPORT GetObjectLockConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    GetObjectLockConfigurationResponse(const GetObjectLockConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetObjectLockConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectLockConfigurationResponse)
    Q_DISABLE_COPY(GetObjectLockConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
