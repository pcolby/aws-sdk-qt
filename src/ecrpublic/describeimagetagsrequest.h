// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGETAGSREQUEST_H
#define QTAWS_DESCRIBEIMAGETAGSREQUEST_H

#include "ecrpublicrequest.h"

namespace QtAws {
namespace EcrPublic {

class DescribeImageTagsRequestPrivate;

class QTAWSECRPUBLIC_EXPORT DescribeImageTagsRequest : public EcrPublicRequest {

public:
    DescribeImageTagsRequest(const DescribeImageTagsRequest &other);
    DescribeImageTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageTagsRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
