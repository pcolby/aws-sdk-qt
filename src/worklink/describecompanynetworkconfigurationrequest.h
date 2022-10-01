// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPANYNETWORKCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBECOMPANYNETWORKCONFIGURATIONREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeCompanyNetworkConfigurationRequestPrivate;

class QTAWSWORKLINK_EXPORT DescribeCompanyNetworkConfigurationRequest : public WorkLinkRequest {

public:
    DescribeCompanyNetworkConfigurationRequest(const DescribeCompanyNetworkConfigurationRequest &other);
    DescribeCompanyNetworkConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCompanyNetworkConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
