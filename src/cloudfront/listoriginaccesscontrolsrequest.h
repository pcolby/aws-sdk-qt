// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINACCESSCONTROLSREQUEST_H
#define QTAWS_LISTORIGINACCESSCONTROLSREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListOriginAccessControlsRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListOriginAccessControlsRequest : public CloudFrontRequest {

public:
    ListOriginAccessControlsRequest(const ListOriginAccessControlsRequest &other);
    ListOriginAccessControlsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOriginAccessControlsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
