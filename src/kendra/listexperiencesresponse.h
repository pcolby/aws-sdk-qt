// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIENCESRESPONSE_H
#define QTAWS_LISTEXPERIENCESRESPONSE_H

#include "kendraresponse.h"
#include "listexperiencesrequest.h"

namespace QtAws {
namespace Kendra {

class ListExperiencesResponsePrivate;

class QTAWSKENDRA_EXPORT ListExperiencesResponse : public KendraResponse {
    Q_OBJECT

public:
    ListExperiencesResponse(const ListExperiencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListExperiencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExperiencesResponse)
    Q_DISABLE_COPY(ListExperiencesResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
