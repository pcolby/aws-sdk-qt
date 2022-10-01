// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTCLASSIFIERREQUEST_H
#define QTAWS_DESCRIBEDOCUMENTCLASSIFIERREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeDocumentClassifierRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DescribeDocumentClassifierRequest : public ComprehendRequest {

public:
    DescribeDocumentClassifierRequest(const DescribeDocumentClassifierRequest &other);
    DescribeDocumentClassifierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDocumentClassifierRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
