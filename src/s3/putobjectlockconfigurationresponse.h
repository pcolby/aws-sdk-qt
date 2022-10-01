// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTLOCKCONFIGURATIONRESPONSE_H
#define QTAWS_PUTOBJECTLOCKCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "putobjectlockconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutObjectLockConfigurationResponsePrivate;

class QTAWSS3_EXPORT PutObjectLockConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    PutObjectLockConfigurationResponse(const PutObjectLockConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutObjectLockConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutObjectLockConfigurationResponse)
    Q_DISABLE_COPY(PutObjectLockConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
