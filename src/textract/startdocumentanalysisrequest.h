// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOCUMENTANALYSISREQUEST_H
#define QTAWS_STARTDOCUMENTANALYSISREQUEST_H

#include "textractrequest.h"

namespace QtAws {
namespace Textract {

class StartDocumentAnalysisRequestPrivate;

class QTAWSTEXTRACT_EXPORT StartDocumentAnalysisRequest : public TextractRequest {

public:
    StartDocumentAnalysisRequest(const StartDocumentAnalysisRequest &other);
    StartDocumentAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDocumentAnalysisRequest)

};

} // namespace Textract
} // namespace QtAws

#endif
