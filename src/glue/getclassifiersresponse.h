// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLASSIFIERSRESPONSE_H
#define QTAWS_GETCLASSIFIERSRESPONSE_H

#include "glueresponse.h"
#include "getclassifiersrequest.h"

namespace QtAws {
namespace Glue {

class GetClassifiersResponsePrivate;

class QTAWSGLUE_EXPORT GetClassifiersResponse : public GlueResponse {
    Q_OBJECT

public:
    GetClassifiersResponse(const GetClassifiersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetClassifiersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetClassifiersResponse)
    Q_DISABLE_COPY(GetClassifiersResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
