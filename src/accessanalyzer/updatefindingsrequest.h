// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGSREQUEST_H
#define QTAWS_UPDATEFINDINGSREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class UpdateFindingsRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT UpdateFindingsRequest : public AccessAnalyzerRequest {

public:
    UpdateFindingsRequest(const UpdateFindingsRequest &other);
    UpdateFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFindingsRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
