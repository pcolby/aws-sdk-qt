// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPDATEDIMAGERESPONSE_H
#define QTAWS_CREATEUPDATEDIMAGERESPONSE_H

#include "appstreamresponse.h"
#include "createupdatedimagerequest.h"

namespace QtAws {
namespace AppStream {

class CreateUpdatedImageResponsePrivate;

class QTAWSAPPSTREAM_EXPORT CreateUpdatedImageResponse : public AppStreamResponse {
    Q_OBJECT

public:
    CreateUpdatedImageResponse(const CreateUpdatedImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUpdatedImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUpdatedImageResponse)
    Q_DISABLE_COPY(CreateUpdatedImageResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
