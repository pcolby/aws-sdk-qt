// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTTERMINOLOGYRESPONSE_H
#define QTAWS_IMPORTTERMINOLOGYRESPONSE_H

#include "translateresponse.h"
#include "importterminologyrequest.h"

namespace QtAws {
namespace Translate {

class ImportTerminologyResponsePrivate;

class QTAWSTRANSLATE_EXPORT ImportTerminologyResponse : public TranslateResponse {
    Q_OBJECT

public:
    ImportTerminologyResponse(const ImportTerminologyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportTerminologyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportTerminologyResponse)
    Q_DISABLE_COPY(ImportTerminologyResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
