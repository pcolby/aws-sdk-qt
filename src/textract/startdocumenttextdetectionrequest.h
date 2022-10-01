// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOCUMENTTEXTDETECTIONREQUEST_H
#define QTAWS_STARTDOCUMENTTEXTDETECTIONREQUEST_H

#include "textractrequest.h"

namespace QtAws {
namespace Textract {

class StartDocumentTextDetectionRequestPrivate;

class QTAWSTEXTRACT_EXPORT StartDocumentTextDetectionRequest : public TextractRequest {

public:
    StartDocumentTextDetectionRequest(const StartDocumentTextDetectionRequest &other);
    StartDocumentTextDetectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDocumentTextDetectionRequest)

};

} // namespace Textract
} // namespace QtAws

#endif
