// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIELDLEVELENCRYPTIONPROFILESRESPONSE_H
#define QTAWS_LISTFIELDLEVELENCRYPTIONPROFILESRESPONSE_H

#include "cloudfrontresponse.h"
#include "listfieldlevelencryptionprofilesrequest.h"

namespace QtAws {
namespace CloudFront {

class ListFieldLevelEncryptionProfilesResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListFieldLevelEncryptionProfilesResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListFieldLevelEncryptionProfilesResponse(const ListFieldLevelEncryptionProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFieldLevelEncryptionProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFieldLevelEncryptionProfilesResponse)
    Q_DISABLE_COPY(ListFieldLevelEncryptionProfilesResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
