// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFHIREXPORTJOBREQUEST_H
#define QTAWS_STARTFHIREXPORTJOBREQUEST_H

#include "healthlakerequest.h"

namespace QtAws {
namespace HealthLake {

class StartFHIRExportJobRequestPrivate;

class QTAWSHEALTHLAKE_EXPORT StartFHIRExportJobRequest : public HealthLakeRequest {

public:
    StartFHIRExportJobRequest(const StartFHIRExportJobRequest &other);
    StartFHIRExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFHIRExportJobRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
