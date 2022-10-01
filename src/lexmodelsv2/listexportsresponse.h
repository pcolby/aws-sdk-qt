// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPORTSRESPONSE_H
#define QTAWS_LISTEXPORTSRESPONSE_H

#include "lexmodelsv2response.h"
#include "listexportsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListExportsResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT ListExportsResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    ListExportsResponse(const ListExportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListExportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExportsResponse)
    Q_DISABLE_COPY(ListExportsResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
