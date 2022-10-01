// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEACTIONRESPONSE_H
#define QTAWS_DESCRIBESERVICEACTIONRESPONSE_H

#include "servicecatalogresponse.h"
#include "describeserviceactionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeServiceActionResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeServiceActionResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribeServiceActionResponse(const DescribeServiceActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeServiceActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServiceActionResponse)
    Q_DISABLE_COPY(DescribeServiceActionResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
