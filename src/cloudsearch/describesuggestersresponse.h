// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUGGESTERSRESPONSE_H
#define QTAWS_DESCRIBESUGGESTERSRESPONSE_H

#include "cloudsearchresponse.h"
#include "describesuggestersrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeSuggestersResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DescribeSuggestersResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DescribeSuggestersResponse(const DescribeSuggestersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSuggestersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSuggestersResponse)
    Q_DISABLE_COPY(DescribeSuggestersResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
