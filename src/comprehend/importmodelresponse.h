// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTMODELRESPONSE_H
#define QTAWS_IMPORTMODELRESPONSE_H

#include "comprehendresponse.h"
#include "importmodelrequest.h"

namespace QtAws {
namespace Comprehend {

class ImportModelResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ImportModelResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ImportModelResponse(const ImportModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportModelResponse)
    Q_DISABLE_COPY(ImportModelResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
