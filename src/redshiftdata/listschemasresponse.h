// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEMASRESPONSE_H
#define QTAWS_LISTSCHEMASRESPONSE_H

#include "redshiftdataresponse.h"
#include "listschemasrequest.h"

namespace QtAws {
namespace RedshiftData {

class ListSchemasResponsePrivate;

class QTAWSREDSHIFTDATA_EXPORT ListSchemasResponse : public RedshiftDataResponse {
    Q_OBJECT

public:
    ListSchemasResponse(const ListSchemasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSchemasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSchemasResponse)
    Q_DISABLE_COPY(ListSchemasResponse)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
