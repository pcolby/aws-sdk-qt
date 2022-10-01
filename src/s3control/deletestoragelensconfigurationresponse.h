// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTORAGELENSCONFIGURATIONRESPONSE_H
#define QTAWS_DELETESTORAGELENSCONFIGURATIONRESPONSE_H

#include "s3controlresponse.h"
#include "deletestoragelensconfigurationrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteStorageLensConfigurationResponsePrivate;

class QTAWSS3CONTROL_EXPORT DeleteStorageLensConfigurationResponse : public S3ControlResponse {
    Q_OBJECT

public:
    DeleteStorageLensConfigurationResponse(const DeleteStorageLensConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStorageLensConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStorageLensConfigurationResponse)
    Q_DISABLE_COPY(DeleteStorageLensConfigurationResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
