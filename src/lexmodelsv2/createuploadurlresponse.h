// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPLOADURLRESPONSE_H
#define QTAWS_CREATEUPLOADURLRESPONSE_H

#include "lexmodelsv2response.h"
#include "createuploadurlrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateUploadUrlResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT CreateUploadUrlResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    CreateUploadUrlResponse(const CreateUploadUrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUploadUrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUploadUrlResponse)
    Q_DISABLE_COPY(CreateUploadUrlResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
