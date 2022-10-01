// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERSBYPATHRESPONSE_H
#define QTAWS_GETPARAMETERSBYPATHRESPONSE_H

#include "ssmresponse.h"
#include "getparametersbypathrequest.h"

namespace QtAws {
namespace Ssm {

class GetParametersByPathResponsePrivate;

class QTAWSSSM_EXPORT GetParametersByPathResponse : public SsmResponse {
    Q_OBJECT

public:
    GetParametersByPathResponse(const GetParametersByPathRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetParametersByPathRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetParametersByPathResponse)
    Q_DISABLE_COPY(GetParametersByPathResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
