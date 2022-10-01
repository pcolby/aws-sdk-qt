// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEEMBEDURLFORANONYMOUSUSERRESPONSE_H
#define QTAWS_GENERATEEMBEDURLFORANONYMOUSUSERRESPONSE_H

#include "quicksightresponse.h"
#include "generateembedurlforanonymoususerrequest.h"

namespace QtAws {
namespace QuickSight {

class GenerateEmbedUrlForAnonymousUserResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT GenerateEmbedUrlForAnonymousUserResponse : public QuickSightResponse {
    Q_OBJECT

public:
    GenerateEmbedUrlForAnonymousUserResponse(const GenerateEmbedUrlForAnonymousUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateEmbedUrlForAnonymousUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateEmbedUrlForAnonymousUserResponse)
    Q_DISABLE_COPY(GenerateEmbedUrlForAnonymousUserResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
