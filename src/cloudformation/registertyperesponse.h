// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTYPERESPONSE_H
#define QTAWS_REGISTERTYPERESPONSE_H

#include "cloudformationresponse.h"
#include "registertyperequest.h"

namespace QtAws {
namespace CloudFormation {

class RegisterTypeResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT RegisterTypeResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    RegisterTypeResponse(const RegisterTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterTypeResponse)
    Q_DISABLE_COPY(RegisterTypeResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
