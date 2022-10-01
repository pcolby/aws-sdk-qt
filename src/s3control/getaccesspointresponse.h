// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTRESPONSE_H
#define QTAWS_GETACCESSPOINTRESPONSE_H

#include "s3controlresponse.h"
#include "getaccesspointrequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetAccessPointResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetAccessPointResponse(const GetAccessPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccessPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPointResponse)
    Q_DISABLE_COPY(GetAccessPointResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
