// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERIMAGERESPONSE_H
#define QTAWS_DELETECONTAINERIMAGERESPONSE_H

#include "lightsailresponse.h"
#include "deletecontainerimagerequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteContainerImageResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteContainerImageResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteContainerImageResponse(const DeleteContainerImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteContainerImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContainerImageResponse)
    Q_DISABLE_COPY(DeleteContainerImageResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
