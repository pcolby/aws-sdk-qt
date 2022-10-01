// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTERMINOLOGIESRESPONSE_H
#define QTAWS_LISTTERMINOLOGIESRESPONSE_H

#include "translateresponse.h"
#include "listterminologiesrequest.h"

namespace QtAws {
namespace Translate {

class ListTerminologiesResponsePrivate;

class QTAWSTRANSLATE_EXPORT ListTerminologiesResponse : public TranslateResponse {
    Q_OBJECT

public:
    ListTerminologiesResponse(const ListTerminologiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTerminologiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTerminologiesResponse)
    Q_DISABLE_COPY(ListTerminologiesResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
