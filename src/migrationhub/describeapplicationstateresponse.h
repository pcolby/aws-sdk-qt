// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONSTATERESPONSE_H
#define QTAWS_DESCRIBEAPPLICATIONSTATERESPONSE_H

#include "migrationhubresponse.h"
#include "describeapplicationstaterequest.h"

namespace QtAws {
namespace MigrationHub {

class DescribeApplicationStateResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT DescribeApplicationStateResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    DescribeApplicationStateResponse(const DescribeApplicationStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeApplicationStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationStateResponse)
    Q_DISABLE_COPY(DescribeApplicationStateResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
