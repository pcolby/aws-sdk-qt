// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTDOCUMENTTEXTREQUEST_H
#define QTAWS_DETECTDOCUMENTTEXTREQUEST_H

#include "textractrequest.h"

namespace QtAws {
namespace Textract {

class DetectDocumentTextRequestPrivate;

class QTAWSTEXTRACT_EXPORT DetectDocumentTextRequest : public TextractRequest {

public:
    DetectDocumentTextRequest(const DetectDocumentTextRequest &other);
    DetectDocumentTextRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectDocumentTextRequest)

};

} // namespace Textract
} // namespace QtAws

#endif
