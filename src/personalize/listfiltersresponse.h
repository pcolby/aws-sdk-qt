// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILTERSRESPONSE_H
#define QTAWS_LISTFILTERSRESPONSE_H

#include "personalizeresponse.h"
#include "listfiltersrequest.h"

namespace QtAws {
namespace Personalize {

class ListFiltersResponsePrivate;

class QTAWSPERSONALIZE_EXPORT ListFiltersResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    ListFiltersResponse(const ListFiltersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFiltersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFiltersResponse)
    Q_DISABLE_COPY(ListFiltersResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
