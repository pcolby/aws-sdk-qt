// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESPONSEPLANSRESPONSE_H
#define QTAWS_LISTRESPONSEPLANSRESPONSE_H

#include "ssmincidentsresponse.h"
#include "listresponseplansrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListResponsePlansResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT ListResponsePlansResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    ListResponsePlansResponse(const ListResponsePlansRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResponsePlansRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResponsePlansResponse)
    Q_DISABLE_COPY(ListResponsePlansResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
