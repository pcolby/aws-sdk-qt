// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSCONTROLCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEACCESSCONTROLCONFIGURATIONREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class DescribeAccessControlConfigurationRequestPrivate;

class QTAWSKENDRA_EXPORT DescribeAccessControlConfigurationRequest : public KendraRequest {

public:
    DescribeAccessControlConfigurationRequest(const DescribeAccessControlConfigurationRequest &other);
    DescribeAccessControlConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccessControlConfigurationRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
