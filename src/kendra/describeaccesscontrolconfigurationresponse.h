// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSCONTROLCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEACCESSCONTROLCONFIGURATIONRESPONSE_H

#include "kendraresponse.h"
#include "describeaccesscontrolconfigurationrequest.h"

namespace QtAws {
namespace Kendra {

class DescribeAccessControlConfigurationResponsePrivate;

class QTAWSKENDRA_EXPORT DescribeAccessControlConfigurationResponse : public KendraResponse {
    Q_OBJECT

public:
    DescribeAccessControlConfigurationResponse(const DescribeAccessControlConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccessControlConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccessControlConfigurationResponse)
    Q_DISABLE_COPY(DescribeAccessControlConfigurationResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
