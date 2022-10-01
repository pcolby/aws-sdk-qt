// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRIGGERSRESPONSE_H
#define QTAWS_LISTTRIGGERSRESPONSE_H

#include "glueresponse.h"
#include "listtriggersrequest.h"

namespace QtAws {
namespace Glue {

class ListTriggersResponsePrivate;

class QTAWSGLUE_EXPORT ListTriggersResponse : public GlueResponse {
    Q_OBJECT

public:
    ListTriggersResponse(const ListTriggersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTriggersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTriggersResponse)
    Q_DISABLE_COPY(ListTriggersResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
