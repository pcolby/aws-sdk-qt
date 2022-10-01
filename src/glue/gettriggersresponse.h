// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRIGGERSRESPONSE_H
#define QTAWS_GETTRIGGERSRESPONSE_H

#include "glueresponse.h"
#include "gettriggersrequest.h"

namespace QtAws {
namespace Glue {

class GetTriggersResponsePrivate;

class QTAWSGLUE_EXPORT GetTriggersResponse : public GlueResponse {
    Q_OBJECT

public:
    GetTriggersResponse(const GetTriggersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTriggersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTriggersResponse)
    Q_DISABLE_COPY(GetTriggersResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
