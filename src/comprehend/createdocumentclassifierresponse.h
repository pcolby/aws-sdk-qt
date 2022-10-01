// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTCLASSIFIERRESPONSE_H
#define QTAWS_CREATEDOCUMENTCLASSIFIERRESPONSE_H

#include "comprehendresponse.h"
#include "createdocumentclassifierrequest.h"

namespace QtAws {
namespace Comprehend {

class CreateDocumentClassifierResponsePrivate;

class QTAWSCOMPREHEND_EXPORT CreateDocumentClassifierResponse : public ComprehendResponse {
    Q_OBJECT

public:
    CreateDocumentClassifierResponse(const CreateDocumentClassifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDocumentClassifierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDocumentClassifierResponse)
    Q_DISABLE_COPY(CreateDocumentClassifierResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
