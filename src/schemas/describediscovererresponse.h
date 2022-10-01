// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDISCOVERERRESPONSE_H
#define QTAWS_DESCRIBEDISCOVERERRESPONSE_H

#include "schemasresponse.h"
#include "describediscovererrequest.h"

namespace QtAws {
namespace Schemas {

class DescribeDiscovererResponsePrivate;

class QTAWSSCHEMAS_EXPORT DescribeDiscovererResponse : public SchemasResponse {
    Q_OBJECT

public:
    DescribeDiscovererResponse(const DescribeDiscovererRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDiscovererRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDiscovererResponse)
    Q_DISABLE_COPY(DescribeDiscovererResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
