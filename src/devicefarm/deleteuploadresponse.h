// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUPLOADRESPONSE_H
#define QTAWS_DELETEUPLOADRESPONSE_H

#include "devicefarmresponse.h"
#include "deleteuploadrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteUploadResponsePrivate;

class QTAWSDEVICEFARM_EXPORT DeleteUploadResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    DeleteUploadResponse(const DeleteUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUploadResponse)
    Q_DISABLE_COPY(DeleteUploadResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
