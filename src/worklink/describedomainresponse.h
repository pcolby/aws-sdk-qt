// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINRESPONSE_H
#define QTAWS_DESCRIBEDOMAINRESPONSE_H

#include "worklinkresponse.h"
#include "describedomainrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeDomainResponsePrivate;

class QTAWSWORKLINK_EXPORT DescribeDomainResponse : public WorkLinkResponse {
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

} // namespace WorkLink
} // namespace QtAws

#endif
