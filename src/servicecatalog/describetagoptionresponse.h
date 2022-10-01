// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGOPTIONRESPONSE_H
#define QTAWS_DESCRIBETAGOPTIONRESPONSE_H

#include "servicecatalogresponse.h"
#include "describetagoptionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeTagOptionResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeTagOptionResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribeTagOptionResponse(const DescribeTagOptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTagOptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTagOptionResponse)
    Q_DISABLE_COPY(DescribeTagOptionResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
