// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENGINEVERSIONSRESPONSE_H
#define QTAWS_LISTENGINEVERSIONSRESPONSE_H

#include "athenaresponse.h"
#include "listengineversionsrequest.h"

namespace QtAws {
namespace Athena {

class ListEngineVersionsResponsePrivate;

class QTAWSATHENA_EXPORT ListEngineVersionsResponse : public AthenaResponse {
    Q_OBJECT

public:
    ListEngineVersionsResponse(const ListEngineVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEngineVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEngineVersionsResponse)
    Q_DISABLE_COPY(ListEngineVersionsResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
