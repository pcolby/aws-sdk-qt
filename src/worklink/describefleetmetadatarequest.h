// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETMETADATAREQUEST_H
#define QTAWS_DESCRIBEFLEETMETADATAREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeFleetMetadataRequestPrivate;

class QTAWSWORKLINK_EXPORT DescribeFleetMetadataRequest : public WorkLinkRequest {

public:
    DescribeFleetMetadataRequest(const DescribeFleetMetadataRequest &other);
    DescribeFleetMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetMetadataRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
