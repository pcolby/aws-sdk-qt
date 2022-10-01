// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTANALYSISREQUEST_H
#define QTAWS_GETDOCUMENTANALYSISREQUEST_H

#include "textractrequest.h"

namespace QtAws {
namespace Textract {

class GetDocumentAnalysisRequestPrivate;

class QTAWSTEXTRACT_EXPORT GetDocumentAnalysisRequest : public TextractRequest {

public:
    GetDocumentAnalysisRequest(const GetDocumentAnalysisRequest &other);
    GetDocumentAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentAnalysisRequest)

};

} // namespace Textract
} // namespace QtAws

#endif
