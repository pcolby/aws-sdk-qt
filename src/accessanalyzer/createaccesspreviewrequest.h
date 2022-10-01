// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPREVIEWREQUEST_H
#define QTAWS_CREATEACCESSPREVIEWREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class CreateAccessPreviewRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT CreateAccessPreviewRequest : public AccessAnalyzerRequest {

public:
    CreateAccessPreviewRequest(const CreateAccessPreviewRequest &other);
    CreateAccessPreviewRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccessPreviewRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
