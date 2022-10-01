// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTORAGELENSCONFIGURATIONTAGGINGRESPONSE_H
#define QTAWS_GETSTORAGELENSCONFIGURATIONTAGGINGRESPONSE_H

#include "s3controlresponse.h"
#include "getstoragelensconfigurationtaggingrequest.h"

namespace QtAws {
namespace S3Control {

class GetStorageLensConfigurationTaggingResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetStorageLensConfigurationTaggingResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetStorageLensConfigurationTaggingResponse(const GetStorageLensConfigurationTaggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStorageLensConfigurationTaggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStorageLensConfigurationTaggingResponse)
    Q_DISABLE_COPY(GetStorageLensConfigurationTaggingResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
