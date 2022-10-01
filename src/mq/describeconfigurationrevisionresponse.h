// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONREVISIONRESPONSE_H
#define QTAWS_DESCRIBECONFIGURATIONREVISIONRESPONSE_H

#include "mqresponse.h"
#include "describeconfigurationrevisionrequest.h"

namespace QtAws {
namespace Mq {

class DescribeConfigurationRevisionResponsePrivate;

class QTAWSMQ_EXPORT DescribeConfigurationRevisionResponse : public MqResponse {
    Q_OBJECT

public:
    DescribeConfigurationRevisionResponse(const DescribeConfigurationRevisionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConfigurationRevisionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationRevisionResponse)
    Q_DISABLE_COPY(DescribeConfigurationRevisionResponse)

};

} // namespace Mq
} // namespace QtAws

#endif
