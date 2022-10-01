// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINRESPONSE_H
#define QTAWS_DESCRIBEDOMAINRESPONSE_H

#include "codeartifactresponse.h"
#include "describedomainrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DescribeDomainResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT DescribeDomainResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    DescribeDomainResponse(const DescribeDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainResponse)
    Q_DISABLE_COPY(DescribeDomainResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
