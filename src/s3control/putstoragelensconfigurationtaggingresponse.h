// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTORAGELENSCONFIGURATIONTAGGINGRESPONSE_H
#define QTAWS_PUTSTORAGELENSCONFIGURATIONTAGGINGRESPONSE_H

#include "s3controlresponse.h"
#include "putstoragelensconfigurationtaggingrequest.h"

namespace QtAws {
namespace S3Control {

class PutStorageLensConfigurationTaggingResponsePrivate;

class QTAWSS3CONTROL_EXPORT PutStorageLensConfigurationTaggingResponse : public S3ControlResponse {
    Q_OBJECT

public:
    PutStorageLensConfigurationTaggingResponse(const PutStorageLensConfigurationTaggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutStorageLensConfigurationTaggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutStorageLensConfigurationTaggingResponse)
    Q_DISABLE_COPY(PutStorageLensConfigurationTaggingResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
