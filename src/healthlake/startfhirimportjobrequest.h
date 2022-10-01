// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFHIRIMPORTJOBREQUEST_H
#define QTAWS_STARTFHIRIMPORTJOBREQUEST_H

#include "healthlakerequest.h"

namespace QtAws {
namespace HealthLake {

class StartFHIRImportJobRequestPrivate;

class QTAWSHEALTHLAKE_EXPORT StartFHIRImportJobRequest : public HealthLakeRequest {

public:
    StartFHIRImportJobRequest(const StartFHIRImportJobRequest &other);
    StartFHIRImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFHIRImportJobRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
