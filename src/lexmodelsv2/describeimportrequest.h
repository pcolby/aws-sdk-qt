// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTREQUEST_H
#define QTAWS_DESCRIBEIMPORTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeImportRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeImportRequest : public LexModelsV2Request {

public:
    DescribeImportRequest(const DescribeImportRequest &other);
    DescribeImportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImportRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
