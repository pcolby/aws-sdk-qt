// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONRESPONSE_H

#include "macie2response.h"
#include "describeorganizationconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class DescribeOrganizationConfigurationResponsePrivate;

class QTAWSMACIE2_EXPORT DescribeOrganizationConfigurationResponse : public Macie2Response {
    Q_OBJECT

public:
    DescribeOrganizationConfigurationResponse(const DescribeOrganizationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOrganizationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationConfigurationResponse)
    Q_DISABLE_COPY(DescribeOrganizationConfigurationResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
