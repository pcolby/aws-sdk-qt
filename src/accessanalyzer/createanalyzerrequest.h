// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANALYZERREQUEST_H
#define QTAWS_CREATEANALYZERREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class CreateAnalyzerRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT CreateAnalyzerRequest : public AccessAnalyzerRequest {

public:
    CreateAnalyzerRequest(const CreateAnalyzerRequest &other);
    CreateAnalyzerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAnalyzerRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
