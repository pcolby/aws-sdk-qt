// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEATTACHMENTREQUEST_H
#define QTAWS_DESCRIBEATTACHMENTREQUEST_H

#include "supportrequest.h"

namespace QtAws {
namespace Support {

class DescribeAttachmentRequestPrivate;

class QTAWSSUPPORT_EXPORT DescribeAttachmentRequest : public SupportRequest {

public:
    DescribeAttachmentRequest(const DescribeAttachmentRequest &other);
    DescribeAttachmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAttachmentRequest)

};

} // namespace Support
} // namespace QtAws

#endif
