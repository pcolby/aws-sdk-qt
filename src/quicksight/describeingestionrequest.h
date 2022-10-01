// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINGESTIONREQUEST_H
#define QTAWS_DESCRIBEINGESTIONREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeIngestionRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeIngestionRequest : public QuickSightRequest {

public:
    DescribeIngestionRequest(const DescribeIngestionRequest &other);
    DescribeIngestionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIngestionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
