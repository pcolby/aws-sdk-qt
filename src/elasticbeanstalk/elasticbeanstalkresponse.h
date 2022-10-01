// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICBEANSTALKRESPONSE_H
#define QTAWS_ELASTICBEANSTALKRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawselasticbeanstalkglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ElasticBeanstalkResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT ElasticBeanstalkResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ElasticBeanstalkResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ElasticBeanstalkResponse(ElasticBeanstalkResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElasticBeanstalkResponse)
    Q_DISABLE_COPY(ElasticBeanstalkResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
