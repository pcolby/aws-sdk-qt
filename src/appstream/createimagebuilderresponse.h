// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEBUILDERRESPONSE_H
#define QTAWS_CREATEIMAGEBUILDERRESPONSE_H

#include "appstreamresponse.h"
#include "createimagebuilderrequest.h"

namespace QtAws {
namespace AppStream {

class CreateImageBuilderResponsePrivate;

class QTAWSAPPSTREAM_EXPORT CreateImageBuilderResponse : public AppStreamResponse {
    Q_OBJECT

public:
    CreateImageBuilderResponse(const CreateImageBuilderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateImageBuilderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImageBuilderResponse)
    Q_DISABLE_COPY(CreateImageBuilderResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
