// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTYPECONFIGURATIONRESPONSE_H
#define QTAWS_SETTYPECONFIGURATIONRESPONSE_H

#include "cloudformationresponse.h"
#include "settypeconfigurationrequest.h"

namespace QtAws {
namespace CloudFormation {

class SetTypeConfigurationResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT SetTypeConfigurationResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    SetTypeConfigurationResponse(const SetTypeConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetTypeConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTypeConfigurationResponse)
    Q_DISABLE_COPY(SetTypeConfigurationResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
