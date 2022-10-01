// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERRESPONSE_H
#define QTAWS_GETPARAMETERRESPONSE_H

#include "ssmresponse.h"
#include "getparameterrequest.h"

namespace QtAws {
namespace Ssm {

class GetParameterResponsePrivate;

class QTAWSSSM_EXPORT GetParameterResponse : public SsmResponse {
    Q_OBJECT

public:
    GetParameterResponse(const GetParameterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetParameterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetParameterResponse)
    Q_DISABLE_COPY(GetParameterResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
