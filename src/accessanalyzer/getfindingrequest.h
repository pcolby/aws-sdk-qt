// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGREQUEST_H
#define QTAWS_GETFINDINGREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetFindingRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT GetFindingRequest : public AccessAnalyzerRequest {

public:
    GetFindingRequest(const GetFindingRequest &other);
    GetFindingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
