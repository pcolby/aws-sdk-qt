// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBLUEPRINTSRESPONSE_H
#define QTAWS_LISTBLUEPRINTSRESPONSE_H

#include "glueresponse.h"
#include "listblueprintsrequest.h"

namespace QtAws {
namespace Glue {

class ListBlueprintsResponsePrivate;

class QTAWSGLUE_EXPORT ListBlueprintsResponse : public GlueResponse {
    Q_OBJECT

public:
    ListBlueprintsResponse(const ListBlueprintsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBlueprintsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBlueprintsResponse)
    Q_DISABLE_COPY(ListBlueprintsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
