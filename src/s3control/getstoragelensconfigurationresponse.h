// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTORAGELENSCONFIGURATIONRESPONSE_H
#define QTAWS_GETSTORAGELENSCONFIGURATIONRESPONSE_H

#include "s3controlresponse.h"
#include "getstoragelensconfigurationrequest.h"

namespace QtAws {
namespace S3Control {

class GetStorageLensConfigurationResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetStorageLensConfigurationResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetStorageLensConfigurationResponse(const GetStorageLensConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStorageLensConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStorageLensConfigurationResponse)
    Q_DISABLE_COPY(GetStorageLensConfigurationResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
