// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIELDLEVELENCRYPTIONCONFIGSREQUEST_H
#define QTAWS_LISTFIELDLEVELENCRYPTIONCONFIGSREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListFieldLevelEncryptionConfigsRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListFieldLevelEncryptionConfigsRequest : public CloudFrontRequest {

public:
    ListFieldLevelEncryptionConfigsRequest(const ListFieldLevelEncryptionConfigsRequest &other);
    ListFieldLevelEncryptionConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFieldLevelEncryptionConfigsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
