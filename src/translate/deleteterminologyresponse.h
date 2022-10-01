// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETERMINOLOGYRESPONSE_H
#define QTAWS_DELETETERMINOLOGYRESPONSE_H

#include "translateresponse.h"
#include "deleteterminologyrequest.h"

namespace QtAws {
namespace Translate {

class DeleteTerminologyResponsePrivate;

class QTAWSTRANSLATE_EXPORT DeleteTerminologyResponse : public TranslateResponse {
    Q_OBJECT

public:
    DeleteTerminologyResponse(const DeleteTerminologyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTerminologyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTerminologyResponse)
    Q_DISABLE_COPY(DeleteTerminologyResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
