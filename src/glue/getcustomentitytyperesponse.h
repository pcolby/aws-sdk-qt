// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMENTITYTYPERESPONSE_H
#define QTAWS_GETCUSTOMENTITYTYPERESPONSE_H

#include "glueresponse.h"
#include "getcustomentitytyperequest.h"

namespace QtAws {
namespace Glue {

class GetCustomEntityTypeResponsePrivate;

class QTAWSGLUE_EXPORT GetCustomEntityTypeResponse : public GlueResponse {
    Q_OBJECT

public:
    GetCustomEntityTypeResponse(const GetCustomEntityTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCustomEntityTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCustomEntityTypeResponse)
    Q_DISABLE_COPY(GetCustomEntityTypeResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
