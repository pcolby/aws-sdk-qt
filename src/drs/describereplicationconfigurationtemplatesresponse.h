// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONCONFIGURATIONTEMPLATESRESPONSE_H
#define QTAWS_DESCRIBEREPLICATIONCONFIGURATIONTEMPLATESRESPONSE_H

#include "drsresponse.h"
#include "describereplicationconfigurationtemplatesrequest.h"

namespace QtAws {
namespace Drs {

class DescribeReplicationConfigurationTemplatesResponsePrivate;

class QTAWSDRS_EXPORT DescribeReplicationConfigurationTemplatesResponse : public DrsResponse {
    Q_OBJECT

public:
    DescribeReplicationConfigurationTemplatesResponse(const DescribeReplicationConfigurationTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReplicationConfigurationTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationConfigurationTemplatesResponse)
    Q_DISABLE_COPY(DescribeReplicationConfigurationTemplatesResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
