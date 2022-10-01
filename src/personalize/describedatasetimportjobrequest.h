// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETIMPORTJOBREQUEST_H
#define QTAWS_DESCRIBEDATASETIMPORTJOBREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DescribeDatasetImportJobRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DescribeDatasetImportJobRequest : public PersonalizeRequest {

public:
    DescribeDatasetImportJobRequest(const DescribeDatasetImportJobRequest &other);
    DescribeDatasetImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatasetImportJobRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
