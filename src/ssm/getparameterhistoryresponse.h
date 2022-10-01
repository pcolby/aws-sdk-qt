// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERHISTORYRESPONSE_H
#define QTAWS_GETPARAMETERHISTORYRESPONSE_H

#include "ssmresponse.h"
#include "getparameterhistoryrequest.h"

namespace QtAws {
namespace Ssm {

class GetParameterHistoryResponsePrivate;

class QTAWSSSM_EXPORT GetParameterHistoryResponse : public SsmResponse {
    Q_OBJECT

public:
    GetParameterHistoryResponse(const GetParameterHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetParameterHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetParameterHistoryResponse)
    Q_DISABLE_COPY(GetParameterHistoryResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
