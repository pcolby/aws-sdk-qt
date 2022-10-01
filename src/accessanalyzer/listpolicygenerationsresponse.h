// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYGENERATIONSRESPONSE_H
#define QTAWS_LISTPOLICYGENERATIONSRESPONSE_H

#include "accessanalyzerresponse.h"
#include "listpolicygenerationsrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListPolicyGenerationsResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT ListPolicyGenerationsResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    ListPolicyGenerationsResponse(const ListPolicyGenerationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPolicyGenerationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPolicyGenerationsResponse)
    Q_DISABLE_COPY(ListPolicyGenerationsResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
