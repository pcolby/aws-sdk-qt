// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODEBINDINGRESPONSE_H
#define QTAWS_DESCRIBECODEBINDINGRESPONSE_H

#include "schemasresponse.h"
#include "describecodebindingrequest.h"

namespace QtAws {
namespace Schemas {

class DescribeCodeBindingResponsePrivate;

class QTAWSSCHEMAS_EXPORT DescribeCodeBindingResponse : public SchemasResponse {
    Q_OBJECT

public:
    DescribeCodeBindingResponse(const DescribeCodeBindingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCodeBindingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCodeBindingResponse)
    Q_DISABLE_COPY(DescribeCodeBindingResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
