// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAYERSREQUEST_H
#define QTAWS_DESCRIBELAYERSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeLayersRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeLayersRequest : public OpsWorksRequest {

public:
    DescribeLayersRequest(const DescribeLayersRequest &other);
    DescribeLayersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLayersRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
