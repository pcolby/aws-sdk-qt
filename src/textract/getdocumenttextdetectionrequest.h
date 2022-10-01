// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTTEXTDETECTIONREQUEST_H
#define QTAWS_GETDOCUMENTTEXTDETECTIONREQUEST_H

#include "textractrequest.h"

namespace QtAws {
namespace Textract {

class GetDocumentTextDetectionRequestPrivate;

class QTAWSTEXTRACT_EXPORT GetDocumentTextDetectionRequest : public TextractRequest {

public:
    GetDocumentTextDetectionRequest(const GetDocumentTextDetectionRequest &other);
    GetDocumentTextDetectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentTextDetectionRequest)

};

} // namespace Textract
} // namespace QtAws

#endif
