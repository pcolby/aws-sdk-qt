// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPLOADRESPONSE_H
#define QTAWS_GETUPLOADRESPONSE_H

#include "devicefarmresponse.h"
#include "getuploadrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetUploadResponsePrivate;

class QTAWSDEVICEFARM_EXPORT GetUploadResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    GetUploadResponse(const GetUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUploadResponse)
    Q_DISABLE_COPY(GetUploadResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
