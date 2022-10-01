// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGIONALBUCKETSREQUEST_H
#define QTAWS_LISTREGIONALBUCKETSREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class ListRegionalBucketsRequestPrivate;

class QTAWSS3CONTROL_EXPORT ListRegionalBucketsRequest : public S3ControlRequest {

public:
    ListRegionalBucketsRequest(const ListRegionalBucketsRequest &other);
    ListRegionalBucketsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRegionalBucketsRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
