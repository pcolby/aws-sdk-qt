// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEMARESPONSE_H
#define QTAWS_DESCRIBESCHEMARESPONSE_H

#include "schemasresponse.h"
#include "describeschemarequest.h"

namespace QtAws {
namespace Schemas {

class DescribeSchemaResponsePrivate;

class QTAWSSCHEMAS_EXPORT DescribeSchemaResponse : public SchemasResponse {
    Q_OBJECT

public:
    DescribeSchemaResponse(const DescribeSchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSchemaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSchemaResponse)
    Q_DISABLE_COPY(DescribeSchemaResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
