// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ANALYZEDOCUMENTREQUEST_H
#define QTAWS_ANALYZEDOCUMENTREQUEST_H

#include "textractrequest.h"

namespace QtAws {
namespace Textract {

class AnalyzeDocumentRequestPrivate;

class QTAWSTEXTRACT_EXPORT AnalyzeDocumentRequest : public TextractRequest {

public:
    AnalyzeDocumentRequest(const AnalyzeDocumentRequest &other);
    AnalyzeDocumentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AnalyzeDocumentRequest)

};

} // namespace Textract
} // namespace QtAws

#endif
