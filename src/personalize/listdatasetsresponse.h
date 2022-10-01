// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSRESPONSE_H
#define QTAWS_LISTDATASETSRESPONSE_H

#include "personalizeresponse.h"
#include "listdatasetsrequest.h"

namespace QtAws {
namespace Personalize {

class ListDatasetsResponsePrivate;

class QTAWSPERSONALIZE_EXPORT ListDatasetsResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    ListDatasetsResponse(const ListDatasetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDatasetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasetsResponse)
    Q_DISABLE_COPY(ListDatasetsResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
