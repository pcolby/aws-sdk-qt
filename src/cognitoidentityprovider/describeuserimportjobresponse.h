// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERIMPORTJOBRESPONSE_H
#define QTAWS_DESCRIBEUSERIMPORTJOBRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "describeuserimportjobrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserImportJobResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DescribeUserImportJobResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    DescribeUserImportJobResponse(const DescribeUserImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUserImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserImportJobResponse)
    Q_DISABLE_COPY(DescribeUserImportJobResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
