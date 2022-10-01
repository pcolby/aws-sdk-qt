// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGERESPONSE_H
#define QTAWS_GETIMAGERESPONSE_H

#include "imagebuilderresponse.h"
#include "getimagerequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetImageResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT GetImageResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    GetImageResponse(const GetImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImageResponse)
    Q_DISABLE_COPY(GetImageResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
