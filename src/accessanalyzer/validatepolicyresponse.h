// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEPOLICYRESPONSE_H
#define QTAWS_VALIDATEPOLICYRESPONSE_H

#include "accessanalyzerresponse.h"
#include "validatepolicyrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ValidatePolicyResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT ValidatePolicyResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    ValidatePolicyResponse(const ValidatePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ValidatePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidatePolicyResponse)
    Q_DISABLE_COPY(ValidatePolicyResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
