// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIFECYCLECONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBELIFECYCLECONFIGURATIONRESPONSE_H

#include "efsresponse.h"
#include "describelifecycleconfigurationrequest.h"

namespace QtAws {
namespace Efs {

class DescribeLifecycleConfigurationResponsePrivate;

class QTAWSEFS_EXPORT DescribeLifecycleConfigurationResponse : public EfsResponse {
    Q_OBJECT

public:
    DescribeLifecycleConfigurationResponse(const DescribeLifecycleConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLifecycleConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLifecycleConfigurationResponse)
    Q_DISABLE_COPY(DescribeLifecycleConfigurationResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
