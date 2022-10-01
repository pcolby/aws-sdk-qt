// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPLOADRESPONSE_H
#define QTAWS_CREATEUPLOADRESPONSE_H

#include "devicefarmresponse.h"
#include "createuploadrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateUploadResponsePrivate;

class QTAWSDEVICEFARM_EXPORT CreateUploadResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    CreateUploadResponse(const CreateUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUploadResponse)
    Q_DISABLE_COPY(CreateUploadResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
