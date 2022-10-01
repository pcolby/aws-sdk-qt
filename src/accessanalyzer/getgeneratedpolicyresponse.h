// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGENERATEDPOLICYRESPONSE_H
#define QTAWS_GETGENERATEDPOLICYRESPONSE_H

#include "accessanalyzerresponse.h"
#include "getgeneratedpolicyrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetGeneratedPolicyResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT GetGeneratedPolicyResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    GetGeneratedPolicyResponse(const GetGeneratedPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGeneratedPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGeneratedPolicyResponse)
    Q_DISABLE_COPY(GetGeneratedPolicyResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
