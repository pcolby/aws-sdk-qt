// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINAUTOTUNESRESPONSE_H
#define QTAWS_DESCRIBEDOMAINAUTOTUNESRESPONSE_H

#include "opensearchresponse.h"
#include "describedomainautotunesrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeDomainAutoTunesResponsePrivate;

class QTAWSOPENSEARCH_EXPORT DescribeDomainAutoTunesResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    DescribeDomainAutoTunesResponse(const DescribeDomainAutoTunesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDomainAutoTunesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainAutoTunesResponse)
    Q_DISABLE_COPY(DescribeDomainAutoTunesResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
