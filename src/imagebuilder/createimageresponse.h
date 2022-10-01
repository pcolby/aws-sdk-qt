// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGERESPONSE_H
#define QTAWS_CREATEIMAGERESPONSE_H

#include "imagebuilderresponse.h"
#include "createimagerequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateImageResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT CreateImageResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    CreateImageResponse(const CreateImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImageResponse)
    Q_DISABLE_COPY(CreateImageResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
