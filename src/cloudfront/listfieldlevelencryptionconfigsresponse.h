// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIELDLEVELENCRYPTIONCONFIGSRESPONSE_H
#define QTAWS_LISTFIELDLEVELENCRYPTIONCONFIGSRESPONSE_H

#include "cloudfrontresponse.h"
#include "listfieldlevelencryptionconfigsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListFieldLevelEncryptionConfigsResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListFieldLevelEncryptionConfigsResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListFieldLevelEncryptionConfigsResponse(const ListFieldLevelEncryptionConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFieldLevelEncryptionConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFieldLevelEncryptionConfigsResponse)
    Q_DISABLE_COPY(ListFieldLevelEncryptionConfigsResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
