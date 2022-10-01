// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYGROUPSREQUEST_H
#define QTAWS_LISTKEYGROUPSREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListKeyGroupsRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListKeyGroupsRequest : public CloudFrontRequest {

public:
    ListKeyGroupsRequest(const ListKeyGroupsRequest &other);
    ListKeyGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKeyGroupsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
