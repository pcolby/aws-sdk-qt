// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTORAGELENSCONFIGURATIONTAGGINGRESPONSE_H
#define QTAWS_DELETESTORAGELENSCONFIGURATIONTAGGINGRESPONSE_H

#include "s3controlresponse.h"
#include "deletestoragelensconfigurationtaggingrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteStorageLensConfigurationTaggingResponsePrivate;

class QTAWSS3CONTROL_EXPORT DeleteStorageLensConfigurationTaggingResponse : public S3ControlResponse {
    Q_OBJECT

public:
    DeleteStorageLensConfigurationTaggingResponse(const DeleteStorageLensConfigurationTaggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStorageLensConfigurationTaggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStorageLensConfigurationTaggingResponse)
    Q_DISABLE_COPY(DeleteStorageLensConfigurationTaggingResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
