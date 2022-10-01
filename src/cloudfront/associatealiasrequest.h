// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEALIASREQUEST_H
#define QTAWS_ASSOCIATEALIASREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class AssociateAliasRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT AssociateAliasRequest : public CloudFrontRequest {

public:
    AssociateAliasRequest(const AssociateAliasRequest &other);
    AssociateAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateAliasRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
