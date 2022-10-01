// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLESOLUTIONSTACKSREQUEST_H
#define QTAWS_LISTAVAILABLESOLUTIONSTACKSREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ListAvailableSolutionStacksRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT ListAvailableSolutionStacksRequest : public ElasticBeanstalkRequest {

public:
    ListAvailableSolutionStacksRequest(const ListAvailableSolutionStacksRequest &other);
    ListAvailableSolutionStacksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailableSolutionStacksRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
