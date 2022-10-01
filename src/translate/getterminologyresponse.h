// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTERMINOLOGYRESPONSE_H
#define QTAWS_GETTERMINOLOGYRESPONSE_H

#include "translateresponse.h"
#include "getterminologyrequest.h"

namespace QtAws {
namespace Translate {

class GetTerminologyResponsePrivate;

class QTAWSTRANSLATE_EXPORT GetTerminologyResponse : public TranslateResponse {
    Q_OBJECT

public:
    GetTerminologyResponse(const GetTerminologyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTerminologyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTerminologyResponse)
    Q_DISABLE_COPY(GetTerminologyResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
