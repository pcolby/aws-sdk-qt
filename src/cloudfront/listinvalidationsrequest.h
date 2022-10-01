// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINVALIDATIONSREQUEST_H
#define QTAWS_LISTINVALIDATIONSREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListInvalidationsRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListInvalidationsRequest : public CloudFrontRequest {

public:
    ListInvalidationsRequest(const ListInvalidationsRequest &other);
    ListInvalidationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInvalidationsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
