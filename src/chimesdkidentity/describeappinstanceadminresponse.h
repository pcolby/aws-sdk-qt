// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEADMINRESPONSE_H
#define QTAWS_DESCRIBEAPPINSTANCEADMINRESPONSE_H

#include "chimesdkidentityresponse.h"
#include "describeappinstanceadminrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DescribeAppInstanceAdminResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT DescribeAppInstanceAdminResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    DescribeAppInstanceAdminResponse(const DescribeAppInstanceAdminRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAppInstanceAdminRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppInstanceAdminResponse)
    Q_DISABLE_COPY(DescribeAppInstanceAdminResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
