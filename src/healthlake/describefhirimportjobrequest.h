// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFHIRIMPORTJOBREQUEST_H
#define QTAWS_DESCRIBEFHIRIMPORTJOBREQUEST_H

#include "healthlakerequest.h"

namespace QtAws {
namespace HealthLake {

class DescribeFHIRImportJobRequestPrivate;

class QTAWSHEALTHLAKE_EXPORT DescribeFHIRImportJobRequest : public HealthLakeRequest {

public:
    DescribeFHIRImportJobRequest(const DescribeFHIRImportJobRequest &other);
    DescribeFHIRImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFHIRImportJobRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
