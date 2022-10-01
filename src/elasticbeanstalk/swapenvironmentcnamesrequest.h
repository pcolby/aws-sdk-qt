// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SWAPENVIRONMENTCNAMESREQUEST_H
#define QTAWS_SWAPENVIRONMENTCNAMESREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class SwapEnvironmentCNAMEsRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT SwapEnvironmentCNAMEsRequest : public ElasticBeanstalkRequest {

public:
    SwapEnvironmentCNAMEsRequest(const SwapEnvironmentCNAMEsRequest &other);
    SwapEnvironmentCNAMEsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SwapEnvironmentCNAMEsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
