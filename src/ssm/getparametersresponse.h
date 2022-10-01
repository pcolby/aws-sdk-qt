// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERSRESPONSE_H
#define QTAWS_GETPARAMETERSRESPONSE_H

#include "ssmresponse.h"
#include "getparametersrequest.h"

namespace QtAws {
namespace Ssm {

class GetParametersResponsePrivate;

class QTAWSSSM_EXPORT GetParametersResponse : public SsmResponse {
    Q_OBJECT

public:
    GetParametersResponse(const GetParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetParametersResponse)
    Q_DISABLE_COPY(GetParametersResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
