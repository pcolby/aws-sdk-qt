// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEARCHIVEREQUEST_H
#define QTAWS_DESCRIBEARCHIVEREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeArchiveRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT DescribeArchiveRequest : public EventBridgeRequest {

public:
    DescribeArchiveRequest(const DescribeArchiveRequest &other);
    DescribeArchiveRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeArchiveRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
