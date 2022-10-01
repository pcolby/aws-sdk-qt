// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTREQUEST_H
#define QTAWS_DESCRIBEEXPORTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeExportRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeExportRequest : public LexModelsV2Request {

public:
    DescribeExportRequest(const DescribeExportRequest &other);
    DescribeExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExportRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
