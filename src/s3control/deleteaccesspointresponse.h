// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTRESPONSE_H
#define QTAWS_DELETEACCESSPOINTRESPONSE_H

#include "s3controlresponse.h"
#include "deleteaccesspointrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteAccessPointResponsePrivate;

class QTAWSS3CONTROL_EXPORT DeleteAccessPointResponse : public S3ControlResponse {
    Q_OBJECT

public:
    DeleteAccessPointResponse(const DeleteAccessPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccessPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessPointResponse)
    Q_DISABLE_COPY(DeleteAccessPointResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
