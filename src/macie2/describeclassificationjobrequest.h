// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLASSIFICATIONJOBREQUEST_H
#define QTAWS_DESCRIBECLASSIFICATIONJOBREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class DescribeClassificationJobRequestPrivate;

class QTAWSMACIE2_EXPORT DescribeClassificationJobRequest : public Macie2Request {

public:
    DescribeClassificationJobRequest(const DescribeClassificationJobRequest &other);
    DescribeClassificationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClassificationJobRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
