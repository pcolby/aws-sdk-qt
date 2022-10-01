// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETEXPORTJOBREQUEST_H
#define QTAWS_DESCRIBEDATASETEXPORTJOBREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DescribeDatasetExportJobRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DescribeDatasetExportJobRequest : public PersonalizeRequest {

public:
    DescribeDatasetExportJobRequest(const DescribeDatasetExportJobRequest &other);
    DescribeDatasetExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatasetExportJobRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
