// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEEMBEDURLFORREGISTEREDUSERRESPONSE_H
#define QTAWS_GENERATEEMBEDURLFORREGISTEREDUSERRESPONSE_H

#include "quicksightresponse.h"
#include "generateembedurlforregistereduserrequest.h"

namespace QtAws {
namespace QuickSight {

class GenerateEmbedUrlForRegisteredUserResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT GenerateEmbedUrlForRegisteredUserResponse : public QuickSightResponse {
    Q_OBJECT

public:
    GenerateEmbedUrlForRegisteredUserResponse(const GenerateEmbedUrlForRegisteredUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateEmbedUrlForRegisteredUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateEmbedUrlForRegisteredUserResponse)
    Q_DISABLE_COPY(GenerateEmbedUrlForRegisteredUserResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
