// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIELDLEVELENCRYPTIONPROFILESREQUEST_H
#define QTAWS_LISTFIELDLEVELENCRYPTIONPROFILESREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListFieldLevelEncryptionProfilesRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListFieldLevelEncryptionProfilesRequest : public CloudFrontRequest {

public:
    ListFieldLevelEncryptionProfilesRequest(const ListFieldLevelEncryptionProfilesRequest &other);
    ListFieldLevelEncryptionProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFieldLevelEncryptionProfilesRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
