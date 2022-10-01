// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTYPEDEFAULTVERSIONRESPONSE_H
#define QTAWS_SETTYPEDEFAULTVERSIONRESPONSE_H

#include "cloudformationresponse.h"
#include "settypedefaultversionrequest.h"

namespace QtAws {
namespace CloudFormation {

class SetTypeDefaultVersionResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT SetTypeDefaultVersionResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    SetTypeDefaultVersionResponse(const SetTypeDefaultVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetTypeDefaultVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTypeDefaultVersionResponse)
    Q_DISABLE_COPY(SetTypeDefaultVersionResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
