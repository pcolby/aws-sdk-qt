// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONRESPONSE_H

#include "ssoadminresponse.h"
#include "describeinstanceaccesscontrolattributeconfigurationrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DescribeInstanceAccessControlAttributeConfigurationResponsePrivate;

class QTAWSSSOADMIN_EXPORT DescribeInstanceAccessControlAttributeConfigurationResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    DescribeInstanceAccessControlAttributeConfigurationResponse(const DescribeInstanceAccessControlAttributeConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstanceAccessControlAttributeConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceAccessControlAttributeConfigurationResponse)
    Q_DISABLE_COPY(DescribeInstanceAccessControlAttributeConfigurationResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
