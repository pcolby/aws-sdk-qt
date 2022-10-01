// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANALYZERREQUEST_H
#define QTAWS_GETANALYZERREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetAnalyzerRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT GetAnalyzerRequest : public AccessAnalyzerRequest {

public:
    GetAnalyzerRequest(const GetAnalyzerRequest &other);
    GetAnalyzerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAnalyzerRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
