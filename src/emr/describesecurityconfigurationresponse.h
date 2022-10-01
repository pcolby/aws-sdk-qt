// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBESECURITYCONFIGURATIONRESPONSE_H

#include "emrresponse.h"
#include "describesecurityconfigurationrequest.h"

namespace QtAws {
namespace Emr {

class DescribeSecurityConfigurationResponsePrivate;

class QTAWSEMR_EXPORT DescribeSecurityConfigurationResponse : public EmrResponse {
    Q_OBJECT

public:
    DescribeSecurityConfigurationResponse(const DescribeSecurityConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSecurityConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecurityConfigurationResponse)
    Q_DISABLE_COPY(DescribeSecurityConfigurationResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
