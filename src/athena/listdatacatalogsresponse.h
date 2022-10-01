// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATACATALOGSRESPONSE_H
#define QTAWS_LISTDATACATALOGSRESPONSE_H

#include "athenaresponse.h"
#include "listdatacatalogsrequest.h"

namespace QtAws {
namespace Athena {

class ListDataCatalogsResponsePrivate;

class QTAWSATHENA_EXPORT ListDataCatalogsResponse : public AthenaResponse {
    Q_OBJECT

public:
    ListDataCatalogsResponse(const ListDataCatalogsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataCatalogsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataCatalogsResponse)
    Q_DISABLE_COPY(ListDataCatalogsResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
