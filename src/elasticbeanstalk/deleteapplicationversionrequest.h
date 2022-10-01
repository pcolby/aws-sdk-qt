// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONVERSIONREQUEST_H
#define QTAWS_DELETEAPPLICATIONVERSIONREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeleteApplicationVersionRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DeleteApplicationVersionRequest : public ElasticBeanstalkRequest {

public:
    DeleteApplicationVersionRequest(const DeleteApplicationVersionRequest &other);
    DeleteApplicationVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationVersionRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
