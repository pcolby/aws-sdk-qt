// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRESOURCESCANREQUEST_H
#define QTAWS_STARTRESOURCESCANREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class StartResourceScanRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT StartResourceScanRequest : public AccessAnalyzerRequest {

public:
    StartResourceScanRequest(const StartResourceScanRequest &other);
    StartResourceScanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartResourceScanRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
