// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSETRESPONSE_H
#define QTAWS_DESCRIBECONFIGURATIONSETRESPONSE_H

#include "sesresponse.h"
#include "describeconfigurationsetrequest.h"

namespace QtAws {
namespace Ses {

class DescribeConfigurationSetResponsePrivate;

class QTAWSSES_EXPORT DescribeConfigurationSetResponse : public SesResponse {
    Q_OBJECT

public:
    DescribeConfigurationSetResponse(const DescribeConfigurationSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConfigurationSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationSetResponse)
    Q_DISABLE_COPY(DescribeConfigurationSetResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
