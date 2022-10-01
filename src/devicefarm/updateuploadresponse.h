// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUPLOADRESPONSE_H
#define QTAWS_UPDATEUPLOADRESPONSE_H

#include "devicefarmresponse.h"
#include "updateuploadrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateUploadResponsePrivate;

class QTAWSDEVICEFARM_EXPORT UpdateUploadResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    UpdateUploadResponse(const UpdateUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUploadResponse)
    Q_DISABLE_COPY(UpdateUploadResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
